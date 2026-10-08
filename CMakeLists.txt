cmake_minimum_required(VERSION 3.20)

project(Voyager 
    VERSION 1.0.0
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(Voyager
    main.cpp
    Player/Player.cpp
    Inventory/Inventory.cpp
    Utility/Utility.cpp
    GameEngine/GameEngine.cpp
    Room/Room.cpp
    Enemy/Enemy.cpp
    ConsoleUI/ConsoleUI.cpp
    Log/log.cpp
)

target_include_directories(Voyager PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/Player
    ${CMAKE_CURRENT_SOURCE_DIR}/Inventory
    ${CMAKE_CURRENT_SOURCE_DIR}/Utility
    ${CMAKE_CURRENT_SOURCE_DIR}/GameEngine
    ${CMAKE_CURRENT_SOURCE_DIR}/Room
    ${CMAKE_CURRENT_SOURCE_DIR}/Enemy
    ${CMAKE_CURRENT_SOURCE_DIR}/ConsoleUI
    ${CMAKE_CURRENT_SOURCE_DIR}/Log
)