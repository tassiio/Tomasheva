//
// Created by tassiio on 24.10.2021.
//

#ifndef CLASS_SLICE_CLASS_SLICE_H
#define CLASS_SLICE_CLASS_SLICE_H

#include <iostream>
#include <string>
#include <typeinfo>
#include <algorithm>
#include <cassert>


class Class_Slice {
private:
    int *S_Array;
    int S_Start_Index;
    int S_Stop_Index;
    int S_Step;
    int S_Slice_Length;
    int S_Slice_Current_Item;

public:
    explicit Class_Slice(int);

    void S_Push(int);

    void S_Parse(std::string);
    ~Class_Slice();
};


#endif //CLASS_SLICE_CLASS_SLICE_H
