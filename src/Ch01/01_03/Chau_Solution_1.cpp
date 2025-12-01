#include <iostream>
#include <string>

//Global variables. They are accessible to all parts of the code.
//Memory is managed statically by the compiler.
//Memory is allocated in the data segment of the memory. 
//After the program ends, their memory is freed.

int a, b = 5; 
int main()
{
    bool my_flag;
    a = 7; //In general, for good coding practice, try not to use global variables.
    my_flag = 0;

    //Declare string variable to hold user's name.
    std::string str;
    //Print the prompt asking user's name:
    std::cout << "What is your name?\n";
    std::cin >> str;
    std::cout << "Very nice to meet you, " << str << ".\n";
    std::cout << "a =  " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    //This below line will print out zero, as false is zero in C++.
    std::cout << "flag = " << my_flag << std::endl;

    unsigned int positive;
    //Try to assign negative to unsigned variable.
    //It will be wrapped around. Instead of -2, it will be 4294967294
    positive = b - a;
    std::cout << "b - a (unsigned) = " << positive <<std::endl;

    std::cout <<std::endl;
    return (0);
}
