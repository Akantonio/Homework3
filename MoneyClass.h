//
// Created by Adrian Antonio on 2/23/2021.
//

#ifndef HOMEWORK3_MONEYCLASS_H
#define HOMEWORK3_MONEYCLASS_H

#include <iostream>


class Money {
    friend std::ostream& operator<<(std::ostream & os,const Money &right);
    friend Money operator+(Money left, const Money &right);
    friend Money operator-(const Money &right);
    friend bool operator==(const Money & left, const Money& right);
    friend bool operator<(const Money & left, const Money& right);
public:
    Money & operator+=(const Money& right);
    Money & operator-=(const Money& right);
    Money & operator*=(const Money& right);
    Money & operator/=(const Money& right);
    Money();
    Money(double amount);
    Money(int dollar, int cents=0);
    int getValue() const;
private:
    int _value;
};

Money operator-(const Money& left, const Money& right);
Money operator*(Money left, const Money& right);
Money operator/(Money left, const Money& right);

bool operator!=(const Money & left, const Money& right);
bool operator>(const Money & left, const Money& right);
bool operator<=(const Money & left, const Money& right);
bool operator>=(const Money & left, const Money& right);
#endif //HOMEWORK3_MONEYCLASS_H
