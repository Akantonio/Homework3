//
// Created by Adrian Antonio on 2/23/2021.
//

#ifndef HOMEWORK3_MONEYCLASS_H
#define HOMEWORK3_MONEYCLASS_H

#include <iostream>

class MoneyClass {
    friend std::ostream& operator<<(std::ostream & os,const MoneyClass & right);
public:
    MoneyClass();
    MoneyClass(double amount);
    MoneyClass(int dollar,int cents);
private:
    int _value;
};


#endif //HOMEWORK3_MONEYCLASS_H
