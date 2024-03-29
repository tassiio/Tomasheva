//
// Created by tassiio on 18.10.2021.
//

#ifndef CLASS_LIFO_CLASS_LIFO_H
#define CLASS_LIFO_CLASS_LIFO_H
#include <iostream>
#include <cassert>

class LIFO {
private:
    int *L_Array;
public:
    //LIFO();
    explicit LIFO(int);
    int L_length;
    int L_current_item;
    ~LIFO();

    void L_Initial_Push(int);
    void L_Push(int);
    static void L_Adding_Element(int *&, int &, int);
    void L_Pop();
    static void L_Deleting_Last(int *&, int &);
};

#endif //CLASS_LIFO_CLASS_LIFO_H
