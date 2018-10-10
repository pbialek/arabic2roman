#include <iostream>

#include "arabic2roman.hpp"

int main() {
    int i;

    std::cout << "Arabic number: ";
    std::cin >> i;

    std::cout << "Roman number: " << arabic2roman(i) << std::endl;
}