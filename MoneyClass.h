//
// Created by Adrian Antonio on 2/23/2021.
//

#ifndef HOMEWORK3_MONEYCLASS_H
#define HOMEWORK3_MONEYCLASS_H

#include <iostream>

class MoneyClass {
    friend std::ostream& operator<<(std::ostream & os,const MoneyClass & right);
public:
    MoneyClass(double amount);
private:
    double _realValue;
    int _value;
};


#endif //HOMEWORK3_MONEYCLASS_H
