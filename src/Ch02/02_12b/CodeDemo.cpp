// Learning C++ 
// Exercise 02_12
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

// enum cow_purpose {dairy, meat, hide, pet};
//C-style enumeration
// enum cow_purpose {dairy, meat, hide, pet};
// enum grocery_section{canned, frozen, meat, laundry, dairy,};

enum class cow_purpose {dairy, meat, hide, pet};
enum class grocery_section{canned, frozen, meat, laundry, dairy,};

int main(){
    int meat = 8;
    int a;
    cow_purpose b;
    b = cow_purpose::pet;
    a = meat;
    grocery_section c = grocery_section::meat;

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << (int)b << std::endl;
    std::cout << "c = " << (int)c << std::endl;
    std::cout << std::endl << std::endl;
    return (0);
}
