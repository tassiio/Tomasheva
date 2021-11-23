//
// Created by tassiio on 23.11.2021.
//

#ifndef INC_23_INHERITANCE_INHERITANCE_H
#define INC_23_INHERITANCE_INHERITANCE_H
#include <iostream>
#include <cassert>

class Inheritance {
protected:
    int *Array;
    int Length;
    int Current_Item;
public:
    static void Adding_Element(int *&, int &, int);
    void Initial_Push(int);
    void Push(int);
    virtual void Pop() = 0;
    virtual void Deleting_Element(int *&, int &) = 0;
    ~Inheritance();
};
class LIFO:public Inheritance {
public:
    explicit LIFO(int);
    void Pop() override;
    void Deleting_Element(int *&, int &) override;
};
class FIFO:public Inheritance {
public:
    explicit FIFO(int);
    void Pop() override;
    void Deleting_Element(int *&, int &) override;
};


#endif //INC_23_INHERITANCE_INHERITANCE_H
