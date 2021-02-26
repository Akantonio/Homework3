//
// Created by Adrian Antonio on 2/23/2021.
//

#include "MoneyClass.h"
#include <iomanip>

Money::Money(): _value(0) {
}

Money::Money(double amount){
    _value= amount*100+0.5;
}

Money::Money(int dollar, int cents){
    _value = dollar*100 + cents;
}


std::ostream &operator<<(std::ostream & os, const Money &right) {
    if(right._value==0){
        return os<<"$0.00";
    }
    double temp = right._value/100.0;
    if(right._value<0){
        return os<<"-$"<< -temp;
    }
    return os<<"$"<<temp;
}
Money operator+(Money left, const Money &right) {
    left+=right;
    return left;
}
Money operator-(const Money &right){
    return {-right._value};
}
Money operator-(const Money& left, const Money& right){
    return left + -right;
}
Money operator*(Money left, const Money& right){
    left*=right;
    return left;
}
Money operator/(Money left, const Money& right){
    return left/=right;
}
bool operator==(const Money & left, const Money& right){
    return left._value == right._value;
}
bool operator<(const Money & left, const Money& right){
    return left._value < right._value;
}


Money & Money::operator+=(const Money &right) {
    _value = _value + right._value;
    return *this;
}
Money & Money::operator-=(const Money& right){
    *this = *this - right;
    return *this;
}
Money & Money::operator/=(const Money& right){
    return *this *= {1/right._value};
}

int Money::getValue()const {
    return _value;
}
Money &Money::operator*=(const Money &right) {
    _value *= right._value;
    return *this;
}


bool operator!=(const Money & left, const Money& right){
    return !(right==left);
}
bool operator>(const Money & left, const Money& right){
    return right < left;
}
bool operator<=(const Money & left, const Money& right){
    return !(right>left);
}
bool operator>=(const Money & left, const Money& right){
    return !(right<left);
}
