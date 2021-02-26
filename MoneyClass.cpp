//
// Created by Adrian Antonio on 2/23/2021.
//

#include "MoneyClass.h"
#include <iomanip>

MoneyClass::MoneyClass():_value(0) {
}

MoneyClass::MoneyClass(double amount) {
    _value= amount *100 +0.5;
}

MoneyClass::MoneyClass(int dollar,int cents){
    _value = dollar*100 + cents;
}

std::ostream &operator<<(std::ostream & os, const MoneyClass &right) {
    double temp = right._value/100.0;
    return os<<"$"<< std::setprecision(5) << temp;
}
