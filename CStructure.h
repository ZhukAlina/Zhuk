#ifndef FIFO_LIFO_CSTRUCTURE_H
#define FIFO_LIFO_CSTRUCTURE_H

#include <iostream>
#include <vector>

using namespace std;

enum Type
{
    FIFO,
	LIFO
};

class CStructure{
public:
	virtual void push(int value) = 0;
    virtual void pop() = 0;
    virtual void print() = 0;
    virtual Type get_type() = 0;
protected:
    Type identifier_;
    vector<int> data_;
    int size_;
};


#endif //FIFO_LIFO_CSTRUCTURE_H
