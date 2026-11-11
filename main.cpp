#include "GameEngine/GameEngine.h"
#include <QApplication>
#include "Gui/MainWindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    GameEngine gameEngine;
    MainWindow window(gameEngine);
    window.show();

    return app.exec();
}
