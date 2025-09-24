#include "functions.h"

int countBits(int number){
    int counter =0;
    while(number != 0 ){
        if(number & 1 == 1){
            ++counter;
        }
        number = number >>1;
    }
    return counter;
}

bool setBit(int& number, int order) {
    if (order < 0 || order > 31) {
        return false; // hibás sorszám
    }
    number |= (1 << order); // adott helyiértékű bitet 1-re állítjuk
    return true;
}