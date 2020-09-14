//
// Created by Michael Kotor on 9/8/20.
//

#ifndef LAB01_ARRAY_H
#define LAB01_ARRAY_H


#include "Array.h"

class Array {
private:
    int size = -1;
    int* array;
    bool isUniqueNumber(int number, int upTo);
    Array(int size);
public:
    Array();
    ~Array();

    Array* joinArray(Array& array);

    void printArray();
};


#endif //LAB01_ARRAY_H
