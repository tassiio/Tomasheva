//
// Created by tassiio on 18.10.2021.
//

#include "Class_LIFO.h"

//LIFO::LIFO() {
//    L_length = 1;
//    L_current_item = 0;
//}

LIFO::LIFO(int length) {
    assert(length > 0);
    L_length = length;
    L_current_item = 0;
    L_Array = new int[L_length];
}

void LIFO::L_Initial_Push(int item) {
    assert(L_current_item < L_length);
    L_Array[L_current_item] =  item;
    L_current_item++;
    //std::cout << L_current_item << std::endl;
}

void LIFO::L_Pop() {
    assert(L_current_item != 0);
    L_Deleting_Last(L_Array, L_length);

    std::cout << "Now your stack is (after extracting the last element): ";
    for (int t = 0; t < L_length; t++) {
        std::cout << L_Array[t] << " ";
    }
    std::cout << std::endl;
}

void LIFO::L_Deleting_Last(int *&array, int &size) {

    std::cout << "Top item of the stack: " << array[size-1] << std::endl;

    int *NewArray = new int[size-1];

    for(int i = 0; i < size-1; i++) {
        NewArray[i] = array[i];
    }
    size--;
    delete[] array;
    array = NewArray;
}

void LIFO::L_Push(int new_element) {
    L_Adding_Element(L_Array, L_length, new_element);
    std::cout << "Now your stack is (after adding one more element): ";
    for (int t = 0; t < L_length; t++) {
        std::cout << L_Array[t] << " ";
    }
    std::cout << std::endl << std::endl;
}

void LIFO::L_Adding_Element(int *&array, int &size, int new_element) {

    int *NewArray = new int[size+1];

    for(int i = 0; i < size; i++) {
        NewArray[i] = array[i];
       // std::cout << array[i] << " " << NewArray[i] << std::endl;
    }
    NewArray[size] = new_element;
    //std::cout << "Top item of the stack: " << NewArray[size] << std::endl;
    size++;
    delete[] array;
    array = NewArray;
}

LIFO::~LIFO() {
    delete []L_Array;
}


