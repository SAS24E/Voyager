#include "Utility.h"
#include <math.h>

int Utility::generateRandomNumber(int min, int max){
    int randomNumber = rand() % (max - min + 1) + min; 
    return randomNumber;
}