#include "MainWindow.h"

#include "../Room/Room.h"
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QWidget>

// Constructor for the MainWindow class. Initializes the main window with the game engine and sets up the UI elements. could be defined as the scene.
MainWindow::MainWindow(GameEngine &gameEngine, QWidget *parent)

    : QMainWindow(parent), gameEngine(gameEngine), roomDetails(new QLabel(this))
{
    auto *centralWidget = new QWidget(this);
    auto *layout = new QVBoxLayout(centralWidget);
    auto *moveForwardButton = new QPushButton("Move Forward", centralWidget);

    setCentralWidget(centralWidget);
    setWindowTitle("Voyager");
    resize(1920, 1080);

    roomDetails->setWordWrap(true);
    layout->addWidget(roomDetails);
    layout->addWidget(moveForwardButton);

    connect(moveForwardButton, &QPushButton::clicked, this, [this]() {
        this->gameEngine.movePlayer();
        updateRoomDetails();
    });

    updateRoomDetails();
}
// Updates the room details label with the current room's name and description.
void MainWindow::updateRoomDetails()
{
    const Room &room = gameEngine.getCurrentRoom();
    roomDetails->setText(QString::fromStdString(
        room.getName() + "\n\n" + room.getDescription()));
}
