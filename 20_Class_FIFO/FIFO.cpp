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

void FIFO::F_Initial_Push(int item) {
    assert(F_current_item < F_length);
    F_Array[F_current_item] =  item;
    F_current_item++;
    //std::cout << F_current_item << std::endl;
}

void FIFO::F_Pop() {
    std::cout << "Top element of the queue: " << F_Array[0] << std::endl;
    F_Deleting_First(F_Array, F_length);
}

void FIFO::F_Deleting_First(int *&array, int &size) {
    int *NewArray = new int[size-1];

    std::cout << "Queue elements (after extracting top element): ";
    for(int i = 0; i < size-1; i++) {
        NewArray[i] = array[i+1];
        std::cout << NewArray[i] << " ";
    }
    std::cout << std::endl << std::endl;
    size--;
    delete[] array;
    array = NewArray;
}

void FIFO::F_Push(int new_element) {
    F_Adding_Element(F_Array, F_length, new_element);
}

void FIFO::F_Adding_Element(int *&array, int &size, int new_element) {

    int *NewArray = new int[size+1];


    for(int i = 0; i < size; i++) {
        NewArray[i] = array[i];
    }
    NewArray[size] = new_element;

    size++;

    std::cout << "Queue elements after adding a new one: ";
    for (int t = 0; t < size; t++) {
       std::cout << NewArray[t] << " ";
    }
    std::cout << std::endl;
    std::cout << "Top item of the queue (after adding a new one): " << NewArray[0] << std::endl;

    delete[] array;
    array = NewArray;
}

FIFO::~FIFO() {
    delete []F_Array;
}