/**
 * A5: Qt Simon Game -- March 20, 2023 -- Spring 2023
 * Josie Fiedel
 *
 * Qt Simon Game View Interface
 */
#ifndef SIMONVIEW_H
#define SIMONVIEW_H

#include <QMainWindow>
#include "ui_SimonView.h"
#include "SimonModel.h"
#include "qevent.h"

QT_BEGIN_NAMESPACE
namespace Ui { class SimonView; }
QT_END_NAMESPACE

class SimonView : public QMainWindow {
    Q_OBJECT

public:
    SimonView(SimonModel& model, QWidget *parent = nullptr);
    ~SimonView();

private slots:
    void resetPlayButton();
    void changeButtonColor(QString);
    void enableButtons();
    void disableButtons();

    void on_playButton_clicked();
    void on_leftRedButton_pressed();
    void on_rightBlueButton_pressed();
    void on_leftRedButton_released();
    void on_rightBlueButton_released();

private:
    Ui::SimonView *ui;
    void keyPressEvent(QKeyEvent *);
    void keyReleaseEvent(QKeyEvent *);

    QPixmap blueFlash;
    QPixmap blueNoFlash;
    QPixmap redPix;
};

#endif // SIMONVIEW_H
