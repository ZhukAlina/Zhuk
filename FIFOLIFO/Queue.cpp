#include "Queue.h"

Queue::Queue(){
    identifier_ = Type::FIFO;
    size_ = 0;
}

Queue::Queue(int *data, int n){//конструктор очереди по целочисленному массиву

    size_ = n;
    identifier_ = Type::FIFO;

    data_.resize(size_);
    for (int i = 0; i < size_; ++i) {
        data_[i] = data[i];
    }
}

Queue::~Queue(){}

void Queue::pop(){//извлечение элемента с конца очереди
    data_.pop_back();
    size_--;
}

void Queue::push(int value){//вставка элемента в начало очереди
    data_.insert(data_.begin(),value);
    size_++;
}

void Queue::print(){
    for (int i = 0; i < size_; ++i) {
        cout << data_[i] << ' ';
    }
    cout << endl;
}

Type Queue::get_type(){
    return identifier_;
