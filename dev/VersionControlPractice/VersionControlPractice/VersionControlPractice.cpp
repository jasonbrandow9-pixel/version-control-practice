#include <iostream>
#include "Crypt.h"

int main()
{
    Crypt crypt;
    crypt.DisplayMessage();

    std::cout << "\nMenu:\n";
    std::cout << "1. Enter the Crypt\n";
    std::cout << "2. Flee\n";

    std::cin.get();
    return 0;
}
