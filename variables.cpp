#include <iostream>
#include <string>

int main(){


    std::cout << "int: " << sizeof (int) * 8 << " bit" << std::endl;
    std::cout << "char: " << sizeof (char) * 8 << " bit" << std::endl;
    std::cout << "float: " << sizeof (float) * 8 << " bit" << std::endl;
    std::cout << "double: " << sizeof (double) * 8 << " bit" << std::endl;
    std::cout << "bool: " << sizeof (bool) * 8 << " bit" << std::endl;
    std::cout << "short: " << sizeof (short) * 8 << " bit" << std::endl;

    std::string greeting = "Hello Karlitos!";
    std::size_t greeting_size = greeting.size();
    std::cout << "greeting_size: " << greeting_size << std::endl;

    return 0;
}