#ifndef FIFO_LIFO_STACK_H
#define FIFO_LIFO_STACK_H

#include "CStructure.h"

using namespace std;

class Stack : public CStructure{
public:

    Stack();

    Stack(int* data,int n);

    ~Stack();

    void pop() override;

    void push(int value) override;

    void print() override;

    Type get_type() override;
};


#endif //FIFO_LIFO_STACK_H
