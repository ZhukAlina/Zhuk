#ifndef FIFO_LIFO_CSTRUCTURE_H
#define FIFO_LIFO_CSTRUCTURE_H

#include <iostream>
#include <vector>

using namespace std;

enum Type{
    FIFO,LIFO
};

template <typename T>
class CStructure{
public:
    virtual void pop() = 0;
    virtual void push(int value) = 0;
    virtual void print() = 0;
    virtual Type get_type() = 0;


};


#endif //FIFO_LIFO_CSTRUCTURE_H
