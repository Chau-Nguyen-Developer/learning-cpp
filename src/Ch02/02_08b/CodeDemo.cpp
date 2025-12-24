// Learning C++ 
// Exercise 02_08
// Arrays, by Eduardo Corpeño 

#include <iostream>
//#define AGE_LENGTH 4 //this is marco, and macros have no scope.



int main(){
    const size_t AGE_LENGTH = 4;
    int age[AGE_LENGTH];

    std::cout << "The age array has " << AGE_LENGTH << "elements" << std::endl;
    std::cout << "At index 0" << std::endl;
    std::cout << age[0]<< std::endl;
    std::cout << "At index 1" << std::endl;
    std::cout << age[1] << std::endl;
    std::cout << "Both values above are garbage number, as we did not initalize the array" << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
