#pragma once
#include <string>


class Player;
class GameEngine; // forward delcare in header allows for us to use the references.
class Enemy;
namespace Utility
{
    int generateRandomNumber(int min, int max);
};