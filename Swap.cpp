#include <iostream>

void swap_1(int& a,int& b){
    int tmp = a;
    a = b;
    b = tmp;
}

void swap_2(int& a,int& b){
    a = a^b;
    b = a^b;
    a = a^b;
}

void swap_3(int& a,int& b){
    a = a + b;
    b = a - b;
    a = a - b;
}

void swap_4(int& a,int& b){
    a = a * b;
    b = a / b; 
    a = a / b;
}
int main() {



    {
        int a = 10;
        int b = 20;
        std::cout << "a = " << a << ' '<< " b = "  << b << std::endl;
        swap_1(a,b);
        std::cout << "a = " << a << ' '<< " b = "  << b << "\n\n";
    }

    {
        int a = 10;
        int b = 20;
        std::cout << "a = " << a << ' '<< " b = "  << b << std::endl;
        swap_2(a,b);
        std::cout << "a = " << a << ' '<< " b = "  << b << "\n\n";
    }

    {
        int a = -10;
        int b = 20;
        std::cout << "a = " << a << ' '<< " b = "  << b << std::endl;
        swap_3(a,b);
        std::cout << "a = " << a << ' '<< " b = "  << b << "\n\n";
    }

    {
        int a = -10;
        int b = 20;
        std::cout << "a = " << a << ' '<< " b = "  << b << std::endl;
        swap_4(a,b);
        std::cout << "a = " << a << ' '<< " b = "  << b << "\n\n";
    }
    return 0;
}
