// Learning C++ 
// Exercise 02_11
// Type Casting Examples, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    int fahrenheit = 100;
    int celcius;

    celcius = ((float)5/9.0) * (fahrenheit - 32);

    std::cout << "Fahrenheit: " << fahrenheit << std::endl;
    std::cout << "Celscius: " << celcius << std::endl;
    
    double weight = 10.99;
    std::cout << "Float: " << weight << std::endl;
    std::cout << "Integer part: " << (int) weight<< std::endl;
    std::cout << "Fractional part: " << (int)((weight - (int)weight) * 10000) << std::endl;

    return (0);
}
