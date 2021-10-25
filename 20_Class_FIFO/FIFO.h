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

    void F_Deleting_First(int *&, int &);
    void F_Push(int);
    void F_Pop();

    void F_Printing_Stack(int);

};

#endif //CLASS_FIFO_FIFO_H
