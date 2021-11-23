//
// Created by tassiio on 23.11.2021.
//

#include "Inheritance.h"
    LIFO::LIFO(int length) {
        assert(length > 0);
        Length = length;
        Current_Item = 0;
        Array = new int[Length];
    }

    FIFO::FIFO(int length) {
        assert(length > 0);
        Length = length;
        Current_Item = 0;
        Array = new int[Length];
    }

    void Inheritance::Initial_Push(int item) {
        assert(Current_Item < Length);
        Array[Current_Item] = item;
        Current_Item++;
    }

    void Inheritance::Push(int new_element) {
        Adding_Element(Array, Length, new_element);
    }

    void Inheritance::Adding_Element(int *&array, int &size, int new_element) {

        int *NewArray = new int[size+1];


        for(int i = 0; i < size; i++) {
            NewArray[i] = array[i];
        }
        NewArray[size] = new_element;

        size++;

        std::cout << "Elements after adding a new one: ";
        for (int t = 0; t < size; t++) {
            std::cout << NewArray[t] << " ";
        }
        std::cout << std::endl;
        delete[] array;
        array = NewArray;
    }

    void FIFO::Pop() {
        std::cout << "Top element of the queue: " << Array[0] << std::endl;
        Deleting_Element(Array, Length);
    }

    void FIFO::Deleting_Element(int *&array, int &size) {
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


    void LIFO::Pop() {
        assert(Current_Item != 0);
        Deleting_Element(Array, Length);

        std::cout << "Now your stack is (after extracting the last element): ";
        for (int t = 0; t < Length; t++) {
            std::cout << Array[t] << " ";
        }
        std::cout << std::endl;
    }

    void LIFO::Deleting_Element(int *&array, int &size) {

        std::cout << "Top item of the stack: " << array[size-1] << std::endl;

        int *NewArray = new int[size-1];

        for(int i = 0; i < size-1; i++) {
            NewArray[i] = array[i];
        }
        size--;
        delete[] array;
        array = NewArray;
    }

    Inheritance::~Inheritance() {
    delete[] Array;
}
