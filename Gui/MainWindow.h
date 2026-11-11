#pragma once

#include "../GameEngine/GameEngine.h"
#include <QMainWindow>

class QLabel;

class MainWindow : public QMainWindow
{
public:
    explicit MainWindow(GameEngine &gameEngine, QWidget *parent = nullptr);

private:
    void updateRoomDetails();

    GameEngine &gameEngine;
    QLabel *roomDetails;
};
