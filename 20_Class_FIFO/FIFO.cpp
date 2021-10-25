//
// Created by tassiio on 18.10.2021.
//

#include "FIFO.h"

//LIFO::LIFO() {
//    L_length = 1;
//    L_current_item = 0;
//}

FIFO::FIFO(int length) {
    assert(length > 0);
    F_length = length;
    F_current_item = 0;
    F_Array = new int[F_length];
}

void FIFO::F_Push(int item) {
    assert(F_current_item < F_length);
    F_Array[F_current_item] =  item;
    F_current_item++;
    //std::cout << F_current_item << std::endl;
}

void FIFO::F_Deleting_First(int *&array, int &size) {
    int *NewArray = new int[size-1];

    for(int i = 0; i < size-1; i++) {
        NewArray[i] = array[i+1];
    }
    size--;
    delete[] array;
    array = NewArray;
}

void FIFO::F_Pop() {
    F_current_item = -1;
    //std::cout << F_current_item << std::endl << std::endl;
    F_Printing_Stack(++F_current_item);
    F_Deleting_First(F_Array, F_length);
}

FIFO::~FIFO() {
    delete []F_Array;
}

void FIFO::F_Printing_Stack(int Its_Item) {
    std::cout << F_Array[Its_Item] << std::endl;
}

