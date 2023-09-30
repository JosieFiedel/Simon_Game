/**
 * A5: Qt Simon Game -- March 20, 2023 -- Spring 2023
 * Josie Fiedel
 */
#include "SimonView.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SimonModel model;
    SimonView view(model);
    view.show();
    return a.exec();
}
