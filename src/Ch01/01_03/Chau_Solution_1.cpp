#include <iostream>
#include <string>

int main()
{
    //Declare string variable to hold user's name.

    //Print the prompt asking user's name:
    std::cout << "What is your name?\n";
    std::string str;
    std::cin >> str;
    std::cout << "Very nice to meet you, " << str << ".\n";
    return (0);
}
