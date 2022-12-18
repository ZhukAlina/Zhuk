
#ifndef FIFO_LIFO_STACK_H
#define FIFO_LIFO_STACK_H

#include "CStructure.h"

using namespace std;

template <typename T>
class Stack : public CStructure<T>{
public:

    Stack(){
        identifier_ = Type::LIFO;
        size_ = 0;
    }

    Stack(T *data, int n){//конструктор стека по целочисленному массиву

		size_ = n;
        identifier_ = Type::LIFO;
        data_.resize(size_);
        for (int i = 0; i < size_; ++i) {
            data_[i] = data[i];
        }
    }

    ~Stack() {}

    void pop(){//извлечение элемента из начала стека
        data_.erase(data_.begin());
        size_--;
    }

    void push(T value){//вставка элемента в начало стека
        data_.insert(data_.begin(),value);
        size_++;
    }

    void print(){
        for (int i = 0; i < size_; ++i) {
            cout << data_[i] << ' ';
        }
        cout << endl;
    }

    Type get_type(){
        return identifier_;
    }

private:
    Type identifier_;
    vector<T> data_;
    int size_;
};


#endif //FIFO_LIFO_STACK_H
