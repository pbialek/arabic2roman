#include "arabic2roman.hpp"

std::string arabic2roman(int i) {
    std::string romanNumber;

    romanNumber = hundredsConverter(i % 1000 / 100 * 100);
    romanNumber += tensConverter(i % 100 / 10 * 10);
    romanNumber += unitiesConverter(i % 10);

    return romanNumber;
}

std::string unitiesConverter(int i) {
    std::string romanUnity;
    switch(i) {
        case 1:
            romanUnity = "I";
        break;

        case 2:
            romanUnity = "II";
        break;

        case 3:
            romanUnity = "III";
        break;

        case 4:
            romanUnity = "IV";
        break;

        case 5:
            romanUnity = "V";
        break;

        case 6:
            romanUnity = "VI";
        break;

        case 7:
            romanUnity = "VII";
        break;

        case 8:
            romanUnity = "VIII";
        break;

        case 9:
            romanUnity = "IX";
        break;

        default:
            romanUnity = "";
        break;
    }
    return romanUnity;
};

std::string tensConverter(int i) {
    std::string romanTens;
    switch(i) {
        case 10:
            romanTens = "X";
        break;

        case 20:
            romanTens = "XX";
        break;

        case 30:
            romanTens = "XXX";
        break;

        case 40:
            romanTens = "XL";
        break;

        case 50:
            romanTens = "L";
        break;

        case 60:
            romanTens = "LX";
        break;

        case 70:
            romanTens = "LXX";
        break;

        case 80:
            romanTens = "LXXX";
        break;

        case 90:
            romanTens = "XC";
        break;

        default:
            romanTens = "";
        break;
    }
    return romanTens;
};

std::string hundredsConverter(int i) {
    std::string romanHundreds;
    switch(i) {
        case 100:
            romanHundreds = "C";
        break;

        case 200:
            romanHundreds = "CC";
        break;

        case 300:
            romanHundreds = "CCC";
        break;

        case 400:
            romanHundreds = "CD";
        break;

        case 500:
            romanHundreds = "D";
        break;

        case 600:
            romanHundreds = "DC";
        break;

        case 700:
            romanHundreds = "DCC";
        break;

        case 800:
            romanHundreds = "DCCC";
        break;

        case 900:
            romanHundreds = "CM";
        break;

        default:
            romanHundreds = "";
        break;
    }
    return romanHundreds;
};