#include "Stack.h"

Stack::Stack(){
    identifier_ = Type::LIFO;
    size_ = 0;
}

Stack::Stack(int *data, int n){//конструктор стека по целочисленному массиву

    identifier_ = Type::FIFO;
    size_ = n;
    data_.resize(size_);
    for (int i = 0; i < size_; ++i) {
        data_[i] = data[i];
    }
}

Stack::~Stack() {}

void Stack::pop(){//извлечение элемента из начала стека
    data_.erase(data_.begin());
    size_--;
}

void Stack::push(int value){//вставка элемента в начало стека
    data_.insert(data_.begin(),value);
    size_++;
}

void Stack::print(){
    for (int i = 0; i < size_; ++i) {
        cout << data_[i] << ' ';
    }
    cout << endl;
}

Type Stack::get_type(){
    return identifier_;
}
