// --- Project Includes ---
#include "my_class.hpp"

// --- STL Includes ---
#include <iostream>

int main()
{
    std::cout << "MyClass<int>::myTemplatedFunction: " << MyClass<int>().myTemplatedFunction() << std::endl;
    std::cout << "MyClass<float>::myTemplatedFunction: " << MyClass<float>().myTemplatedFunction() << std::endl;
}
