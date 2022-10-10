#include <iostream>
#include <string>
 
int main()
{
    std::cout << "Enter your name: ";
    std::string myName;
    std::getline(std::cin, myName); 

 
    std::cout << "Hello, " << myName <<std::endl;
	return 0;
}
