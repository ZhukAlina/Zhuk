#include <iostream>
#include <vector>
#include <fstream>

#include "Stack.h"
#include "Queue.h"
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


void push_pop_function(CStructure* cStructure){
    for (int i = 0; i < 4; ++i) {//добавление четырех элементов и пошаговая печать
        cStructure->push(i);
        cStructure->print();
    }
    for (int i = 0; i < 4; ++i) {//удаление четырех элементов и пошаговая печать
        cStructure->pop();
        cStructure->print();
    }

}

void type_identifier(CStructure* cStructure){
    Type obj_type = cStructure->get_type();

    switch (obj_type) {
        case Type::FIFO :
            cout << "IT'S A QUEUE !\n";
            break;
        case Type::LIFO :
            cout << "IT'S A STACK !\n";
            break;
    }

}

int main() {
    //vector<int> a = {0,1,2,3,4,5,6,7,8,9};
    int test_array[] = {0,1,2,3,4,5,6,7,8,9};
    {
        cout << "==================STACK==================\n";
        Stack stack(test_array, 10);
        stack.print();
        stack.pop();//удаление с начала
        stack.print();
        stack.push(100);//добавление в начало
        stack.print();
        cout << "=========================================\n";
    }
    {
        cout << "==================QUEUE==================\n";
        Queue queue(test_array,10);
        queue.print();
        queue.pop();//удаление с конца
        queue.print();
        queue.push(100);//добавление в начало
        queue.print();
        cout << "=========================================\n";
    }
    {
        cout << "=================TEST PUSH_POP_FUNCTION WITH STACK========================\n";
        Stack* stack = new Stack();
        push_pop_function(stack);
        delete stack;
        cout << "==========================================================================\n";
    }
    {
        cout << "=================TEST PUSH_POP_FUNCTION WITH QUEUE========================\n";
        Queue* queue = new Queue();
        push_pop_function(queue);
        delete queue;
        cout << "==========================================================================\n";
    }

    {
        cout << "=================TEST TYPE_IDENTIFIER WITH STACK========================\n";
        Stack* stack = new Stack();
        type_identifier(stack);
        delete stack;
        cout << "==========================================================================\n";
    }
    {
        cout << "=================TEST TYPE_IDENTIFIER WITH QUEUE========================\n";
        Queue* queue = new Queue();
        type_identifier(queue);
        delete queue;
        cout << "==========================================================================\n";
    }

    return 0;
}
