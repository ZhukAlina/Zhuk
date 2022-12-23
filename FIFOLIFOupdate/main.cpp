#include <iostream>
#include <vector>

#include "Stack.h"
#include "Queue.h"

using namespace std;

template <typename T>
void push_pop_function(CStructure<T>* cStructure){
    for (int i = 0; i < 4; ++i) {//добавление четырех элементов и пошаговая печать
        cStructure->push(i);
        cStructure->print();
    }
    for (int i = 0; i < 4; ++i) {//удаление четырех элементов и пошаговая печать
        cStructure->pop();
        cStructure->print();
    }

}

template <typename T>
void type_identifier(CStructure<T>* cStructure){
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
        Stack<int> stack(test_array,10);
        stack.print();
        stack.pop();//удаление с начала
        stack.print();
        stack.push(100);//добавление в начало
        stack.print();
        cout << "=========================================\n";
    }
    {
        cout << "==================QUEUE==================\n";
        Queue<int> queue(test_array,10);
        queue.print();
        queue.pop();//удаление с конца
        queue.print();
        queue.push(100);//добавление в начало
        queue.print();
        cout << "=========================================\n";
    }
    {
        cout << "=================TEST PUSH_POP_FUNCTION WITH STACK========================\n";
        Stack<int>* stack = new Stack<int>();
        push_pop_function(stack);
        delete stack;
        cout << "==========================================================================\n";
    }
    {
        cout << "=================TEST PUSH_POP_FUNCTION WITH QUEUE========================\n";
        Queue<int>* queue = new Queue<int>();
        push_pop_function(queue);
        delete queue;
        cout << "==========================================================================\n";
    }

    {
        cout << "=================TEST TYPE_IDENTIFIER WITH STACK========================\n";
        Stack<int>* stack = new Stack<int>();
        type_identifier(stack);
        delete stack;
        cout << "==========================================================================\n";
    }
    {
        cout << "=================TEST TYPE_IDENTIFIER WITH QUEUE========================\n";
        Queue<int>* queue = new Queue<int>();
        type_identifier(queue);
        delete queue;
        cout << "==========================================================================\n";
    }

    return 0;
}
