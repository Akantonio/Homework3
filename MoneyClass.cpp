//
// Created by Adrian Antonio on 2/23/2021.
//

#include "MoneyClass.h"
#include <iomanip>

MoneyClass::MoneyClass():_value(0) {
}

MoneyClass::MoneyClass(double amount){
    _value= amount*100+0.5;
}

MoneyClass::MoneyClass(int dollar,int cents){
    _value = dollar*100 + cents;
}


std::ostream &operator<<(std::ostream & os, const MoneyClass &right) {
    if(right._value==0){
        return os<<"$0.00";
    }
    double temp = right._value/100.0;
    if(right._value<0){
        return os<<"-$"<< -temp;
    }
    return os<<"$"<<temp;
}

MoneyClass &MoneyClass::operator+=(const MoneyClass &right) {
    _value = _value +right._value;
    return *this;
}

MoneyClass operator+(MoneyClass left, const MoneyClass &right) {
    left+=right;
    return left;
}
