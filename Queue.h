#ifndef FIFO_LIFO_QUEUE_H
#define FIFO_LIFO_QUEUE_H

#include "CStructure.h"

using namespace std;

template <typename T>
class Queue : public CStructure<T>{
public:

    Queue(){
        identifier_ = Type::FIFO;
        size_ = 0;
    }

    Queue(T *data, int n){//конструктор очереди по целочисленному массиву

        size_ = n;
        identifier_ = Type::FIFO;

        data_.resize(size_);
        for (int i = 0; i < size_; ++i) {
            data_[i] = data[i];
        }
    }

    ~Queue(){}

    void pop(){//извлечение элемента с конца очереди
        data_.pop_back();
        size_--;
    }

    void push(T value){//вставка элемента в начало очереди
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


#endif //FIFO_LIFO_QUEUE_H
