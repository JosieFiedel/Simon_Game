/**
 * A5: Qt Simon Game -- March 20, 2023 -- Spring 2023
 * Josie Fiedel
 *
 * Qt Simon Game Model/Game Logic:
 * Contains the game logic for Simon, including management for player vs.
 * computer turns and checks for player button hits.
 */
#include "SimonModel.h"

SimonModel::SimonModel(QObject *parent) :
    QObject{parent}, score{}, levels{}, currLevel{}, lvlSpeed{1000} { }

/**
 * @brief SimonModel::startComputerTurn
 * Begins the level by generating and adding a new move to the levels list.
 * The button flash recursion is started for the levels list.
 */
void SimonModel::startComputerTurn() {
    // Generate the new starting move.
    (rand() % 2) ? levels.push_back("red") : levels.push_back("blue");

    // Start flashing the button colors.
    int level = 0;
    QTimer::singleShot(calcLevelSpeed(), this, [this, level]{ flashButtonOn(level); });
}

/**
 * @brief SimonModel::flashButtonOn
 * Notify the view to change the color of the appropriate button in the sequence.
 * The button is then changed back to its default color after a specific amount of time
 * (the calculated level speed). Once all of the levels have been displayed, the recursion
 * stops and the view is notified that it becomes the player's turn.
 * @param level -- Current level
 */
void SimonModel::flashButtonOn(int level) {
    // The player's turn begins once all of the levels have been displayed.
    if(int(levels.size()) == level) {
        emit startTurn();
        return;
    }

    // "Flash" the button corresponding to the level color.
    emit updateButton(levels[level]);

    // Reset the button to its default color.
    QTimer::singleShot(calcLevelSpeed(), this, [this, level]{ flashButtonOff(level); });
}

/**
 * @brief SimonModel::flashButtonOff
 * Notify the view to change the button color back to default, increment the level,
 * and recall the recursion for flashing the button for the next level.
 * @param level -- Current level
 */
void SimonModel::flashButtonOff(int level) {
    // Notify the view to update the button color.
    emit updateButton("");
    level++;

    // Flash the next button in the sequence.
    QTimer::singleShot(calcLevelSpeed() / 2, this, [this, level]{ flashButtonOn(level); });
}

/**
 * @brief SimonModel::onRedButtonHit
 * Checks if hitting the red button was the correct move for the player.
 */
void SimonModel::onRedButtonHit() {
    checkButtonHit("red");
}

/**
 * @brief SimonModel::onBlueButtonHit
 * Checks if hitting the blue button was the correct move for the player.
 */
void SimonModel::onBlueButtonHit() {
    checkButtonHit("blue");
}

/**
 * @brief SimonModel::checkButtonHit
 * Determines if the passed in color correctly matches the color of the corresponding
 * level. The computer's turn begins if the last level is correctly matched with the
 * passed in color. If the color is not matched, then the game is reset.
 * @param color -- color to be checked
 */
void SimonModel::checkButtonHit(QString color) {
    // The game progress is updated if the player hits the correct button.
    if(levels[currLevel] == color) {
        currLevel++;
        emit updateProgress(int((double(currLevel) / double(levels.size())) * 100));

        // The computer's turn begins if the player finishes the sequence correctly.
        if(int(levels.size()) == currLevel) {
            emit endTurn();
            score++;
            QTimer::singleShot(lvlSpeed, this, [this]{ endPlayerTurn(score); });
        }
    }
    // The game is reset if the player hits the incorrect button.
    else
        resetGame();
}

/**
 * @brief SimonModel::resetProgress
 * Set the level to 0 and notify the view to visually update the reset game.
 * @param newScore -- new score to update the old score
 */
void SimonModel::resetProgress(int newScore) {
    currLevel = 0;
    emit updateScore(QString::number(newScore));
    emit updateProgress(0);
}

/**
 * @brief SimonModel::endPlayerTurn
 * Reset the game progress and begin the computer's turn.
 * @param newScore -- new score to update the old score
 */
void SimonModel::endPlayerTurn(int newScore) {
    resetProgress(newScore);
    QTimer::singleShot(lvlSpeed, this, [this]{ startComputerTurn(); });
}

/**
 * @brief SimonModel::resetGame
 * Clear the levels and Revert the game stats back to default.
 * Notify the view to update the visuals to restart the game.
 */
void SimonModel::resetGame() {
    levels.clear();
    score = 0;
    resetProgress(score);
    emit endTurn();
    emit resetAll();
}

/**
 * @brief SimonModel::calcLevelSpeed
 * Calculates the level speed depending on the current number of levels.
 * @return level speed
 */
int SimonModel::calcLevelSpeed() {
    return lvlSpeed * pow(.9, levels.size());
}
