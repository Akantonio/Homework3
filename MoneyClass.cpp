//
// Created by Adrian Antonio on 2/23/2021.
//

#include "MoneyClass.h"

MoneyClass::MoneyClass(double amount) {
    _value= amount *100 +0.5;
}

std::ostream &operator<<(std::ostream & os, const MoneyClass &right) {
    double temp = right._value/100.0;
    return os<<"$"<< temp;
}
