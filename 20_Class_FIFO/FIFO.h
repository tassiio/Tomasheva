//
// Created by tassiio on 22.10.2021.
//

#ifndef CLASS_FIFO_FIFO_H
#define CLASS_FIFO_FIFO_H
#include <iostream>
#include <cassert>

class FIFO {
private:
    int *F_Array;
public:
    explicit FIFO(int);
    int F_length;
    int F_current_item;

    ~FIFO();

    static void F_Deleting_First(int *&, int &);
    static void F_Adding_Element(int *&, int &, int);
    void F_Initial_Push(int);
    void F_Push(int);
    void F_Pop();

};

#endif //CLASS_FIFO_FIFO_H
