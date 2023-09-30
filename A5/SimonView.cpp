/**
 * A5: Qt Simon Game -- March 20, 2023 -- Spring 2023
 * Josie Fiedel
 *
 * Qt Simon Game View Interface:
 * Contains the visuals for displaying the Simon model, including
 * the play button, red and blue game buttons, score/progress bar,
 * and the lose display.
 */
#include "SimonView.h"

SimonView::SimonView(SimonModel& model, QWidget *parent) :
    QMainWindow(parent), ui(new Ui::SimonView),
    blueFlash{"C:/Users/Josie/Downloads/blueFlashOn.png"},
    blueNoFlash{"C:/Users/Josie/Downloads/blueFlashOff.png"} {

    // Visually set up the starting screen.
    ui->setupUi(this);
    disableButtons();
    ui->youLostLabel->hide();
    ui->gameStatus->hide();
    ui->progressBar->setValue(0);

    connect(ui->playButton, &QPushButton::clicked, &model, &SimonModel::startComputerTurn);
    connect(ui->leftRedButton, &QPushButton::clicked, &model, &SimonModel::onRedButtonHit);
    connect(ui->rightBlueButton, &QPushButton::clicked, &model, &SimonModel::onBlueButtonHit);
    connect(&model, &SimonModel::updateButton, this, &SimonView::changeButtonColor);
    connect(&model, &SimonModel::startTurn, this, &SimonView::enableButtons);
    connect(&model, &SimonModel::endTurn, this, &SimonView::disableButtons);
    connect(&model, &SimonModel::resetAll, this, &SimonView::resetPlayButton);
    connect(&model, &SimonModel::leftKeyHit, this, &SimonView::on_leftRedButton_pressed);
    connect(&model, &SimonModel::rightKeyHit, this, &SimonView::on_rightBlueButton_pressed);
    connect(&model, &SimonModel::updateProgress, ui->progressBar, &QProgressBar::setValue);
    connect(&model, &SimonModel::updateScore, ui->score, &QLabel::setText);
}

/**
 * @brief SimonView::on_playButton_clicked
 * Displays the visual elements to start the game after the player clicks
 * the play button.
 */
void SimonView::on_playButton_clicked() {
    ui->playButton->setDisabled(true);
    ui->playButton->hide();
    ui->youLostLabel->hide();
    ui->gameStatus->setText("Watch!");
    ui->gameStatus->show();
}

/**
 * @brief SimonView::resetPlayButton
 * Displays the visual elements to restart the game after the player
 * "loses" the game (i.e. when the game is reset).
 */
void SimonView::resetPlayButton() {
    ui->playButton->setDisabled(false);
    ui->playButton->show();
    ui->youLostLabel->show();
    ui->gameStatus->setText("");
}

/**
 * @brief SimonView::enableButtons
 * The buttons are enabled and "Play!" is displayed on screen
 * when it's the player's turn.
 */
void SimonView::enableButtons() {
    ui->gameStatus->setText("Play!");
    ui->leftRedButton->setDisabled(false);
    ui->rightBlueButton->setDisabled(false);
}

/**
 * @brief SimonView::enableButtons
 * The buttons are disabled and "Watch!" is displayed on screen
 * when it's the computer's turn.
 */
void SimonView::disableButtons() {
    ui->gameStatus->setText("Watch!");
    ui->leftRedButton->setDisabled(true);
    ui->rightBlueButton->setDisabled(true);
}

/**
 * @brief SimonView::changeButtonColor
 * Given a passed-in string, changes the appropriate button color (red or blue buttons)
 * to that respective color (red, blue, or white).
 * @param color -- QString representing the color to be changed
 */
void SimonView::changeButtonColor(QString color) {
    if(color == "red") {
        ui->leftRedButton->setStyleSheet(
            "border-image: url(\":/icons/redFlashOn.png\") 0 0 0 0 stretch stretch;"
            "border-style: inset;" "border-radius: 10px;");
    }
    else if(color == "blue") {
        ui->rightBlueButton->setStyleSheet(
            "border-image: url(\":/icons/blueFlashOn.png\") 0 0 0 0 stretch stretch;"
            "border-style: inset;" "border-radius: 10px;");
    }
    else {
        ui->leftRedButton->setStyleSheet(
            "border-image: url(\":/icons/redFlashOff.png\") 0 0 0 0 stretch stretch;"
            "border-style: outset;" "border-radius: 10px;");

        ui->rightBlueButton->setStyleSheet(
            "border-image: url(\":/icons/blueFlashOff.png\") 0 0 0 0 stretch stretch;"
            "border-style: outset;" "border-radius: 10px;");
    }
}

/**
 * @brief SimonView::on_leftRedButton_pressed
 * Changes the red button color to "red" when pressed.
 */
void SimonView::on_leftRedButton_pressed() {
    changeButtonColor("red");
}

/**
 * @brief SimonView::on_rightBlueButton_pressed
 * Changes the blue button color to "blue" when pressed.
 */
void SimonView::on_rightBlueButton_pressed() {
    changeButtonColor("blue");
}

/**
 * @brief SimonView::on_leftRedButton_released
 * Changes the red button color to "white" when released.
 */
void SimonView::on_leftRedButton_released() {
    changeButtonColor("");
}

/**
 * @brief SimonView::on_rightBlueButton_released
 * Changes the blue button color to "white" when released.
 */
void SimonView::on_rightBlueButton_released() {
    changeButtonColor("");
}

/**
 * @brief SimonView::keyPressEvent
 * Simulates a mouse press with keyboard input, where "a" or the left arrow represents
 * pressing the left red button and "d" or the right arrow represents pressing the right
 * blue button.
 * @param event -- keyboard key press event
 */
void SimonView::keyPressEvent(QKeyEvent *event) {
    if(ui->leftRedButton->isEnabled() && (event->key() == Qt::Key_Left || event->key() == Qt::Key_A))
        on_leftRedButton_pressed();
    else if(ui->rightBlueButton->isEnabled() && (event->key() == Qt::Key_Right || event->key() == Qt::Key_D))
        on_rightBlueButton_pressed();
}

/**
 * @brief SimonView::keyReleaseEvent
 * Simulates a mouse release with keyboard input, where "a" or the left arrow represents
 * releasing the left red button and "d" or the right arrow represents releasing the left
 * blue button.
 * @param event -- keyboard key release event
 */
void SimonView::keyReleaseEvent(QKeyEvent *event) {
    if(ui->leftRedButton->isEnabled() && (event->key() == Qt::Key_Left || event->key() == Qt::Key_A)) {
        on_leftRedButton_released();
        emit ui->leftRedButton->clicked();
    }
    else if(ui->rightBlueButton->isEnabled() && (event->key() == Qt::Key_Right || event->key() == Qt::Key_D)) {
        on_rightBlueButton_released();
        emit ui->rightBlueButton->clicked();
    }
}

/**
 * @brief SimonView::~SimonView
 * SimonView class destructor.
 */
SimonView::~SimonView() {
    delete ui;
}
