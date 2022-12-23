#ifndef FIFO_LIFO_QUEUE_H
#define FIFO_LIFO_QUEUE_H

#include "CStructure.h"

using namespace std;

class Queue : public CStructure{
public:

    Queue();

    Queue(int* data,int n);

    ~Queue();

    void pop() override;

    void push(int value) override;

    void print() override;

    Type get_type() override;
};


#endif //FIFO_LIFO_QUEUE_H
