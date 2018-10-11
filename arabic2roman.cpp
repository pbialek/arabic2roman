#include<iostream>

#include "arabic2roman.hpp"

std::string arabic2roman(int i) {
    if(i > 3999) {
        return "";
    }
    std::string romanNumber;

    const std::string unities[3] = {"I", "V", "X"};
    const std::string tens[3] = {"X", "L", "C"};
    const std::string hundreds[3] = {"C", "D", "M"};

    romanNumber = signsConverter(i % 1000 / 100, hundreds);
    romanNumber += signsConverter(i % 100 / 10, tens);
    romanNumber += signsConverter(i % 10, unities);

    return romanNumber;
}

std::string signsConverter(int i, const std::string signs[]) {
    std::string romanNumber = "";
    switch(i) {
        case 1:
            romanNumber = signs[0];
        break;

        case 2:
            romanNumber = signs[0] + signs[0];
        break;

        case 3:
            romanNumber = signs[0] + signs[0] + signs[0];
        break;

        case 4:
            romanNumber = signs[0] + signs[1];
        break;

        case 5:
            romanNumber = signs[1];
        break;

        case 6:
            romanNumber = signs[1] + signs[0];
        break;

        case 7:
            romanNumber = signs[1] + signs[0] + signs[0];
        break;

        case 8:
            romanNumber = signs[1] + signs[0] + signs[0] + signs[0];
        break;

        case 9:
            romanNumber = signs[0] + signs[2];
        break;

        default:
            romanNumber = "";
        break;
    }
    return romanNumber;
};