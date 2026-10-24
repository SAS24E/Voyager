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
    Log/Log.cpp
    Item/Item.cpp
    Item/ItemFactory.cpp
)

# Root directory inclusion allows: #include "Item/Item.h", #include "Player/Player.h", etc.
target_include_directories(Voyager PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
)