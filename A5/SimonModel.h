/**
 * A5: Qt Simon Game -- March 20, 2023 -- Spring 2023
 * Josie Fiedel
 *
 * Qt Simon Game Model/Game Logic
 */
#ifndef SIMONMODEL_H
#define SIMONMODEL_H

#include <QObject>
#include <QTimer>
#include <vector>

class SimonModel : public QObject {
    Q_OBJECT
public:
    explicit SimonModel(QObject *parent = nullptr);

signals:
    void updateButton(QString);
    void updateProgress(int);
    void updateScore(QString);
    void startTurn();
    void endTurn();
    void resetAll();
    void leftKeyHit();
    void rightKeyHit();

public slots:
    void startComputerTurn();
    void flashButtonOn(int);
    void flashButtonOff(int);
    void onRedButtonHit();
    void onBlueButtonHit();

private:
    int score;
    std::vector<QString> levels;
    int currLevel;
    int lvlSpeed;

    void resetProgress(int);
    void resetGame();
    void endPlayerTurn(int);
    void checkButtonHit(QString);
    int calcLevelSpeed();
};

#endif // SIMONMODEL_H
