//
// Created by Michael Kotor on 9/8/20.
//
#include<iostream>
#include "Array.h"

using namespace std;

Array::Array(int size) {
    this->size = size;
    this->array = new int[size];
}

Array::Array() {
    int length;
    cout << "Создание массива. Введите длину" << endl;
    cin >> length;
    this->size = length;
    this->array = new int[length];
    for(int i = 0 ; i < length; i++) {
        cout << "array[" << i << "] = ";
        int temp;
        cin >> temp;
        if(this->isUniqueNumber(temp, i)) {
            this->array[i] = temp;
        } else {
            cout << "Вы ввели неуникальное значение. Попробуйте еще раз" << endl;
            i--;
        }
    }
}


Array::~Array() {
    delete this->array;
}

void Array::printArray() {
    cout << "Let's print array" << endl;
    for(int i = 0 ; i < this->size; i++) {
        cout << this->array[i] << endl;
    }
}

Array* Array::joinArray(Array &first) {
    int maxPossibleLength = min(this->size, first.size);
    int counter = 0;
    int* temp = new int[maxPossibleLength];

    for (int i = 0; i < this->size; i++) {
        for (int j = 0; j < first.size; j++) {
            if (this->array[i] == first.array[j]) {
                temp[counter++] = first.array[j];
                break;
            }
        }
    }

    Array* toReturn = new Array(counter);
    for(int i = 0; i < toReturn->size; i++) {
        toReturn->array[i] = temp[i];
    }
    delete temp;
    return toReturn;

}

bool Array::isUniqueNumber(int number, int upTo) {
    for(int i = 0 ; i < upTo; i++) {
        if(this->array[i] == number) return false;
    }
    return true;
}
