#include <iostream>
#include "Array.h"

using namespace std;

int main() {
    //создание объекта
    Array* firstArray = new Array();
    firstArray->printArray();

    Array* secondArray = new Array();

    Array* thirdArray = firstArray->joinArray(*secondArray);
    thirdArray->printArray();

    delete firstArray;
    delete secondArray;
    delete thirdArray;
    return 0;
}

