#include "MoneyClass.h"
#include <iostream>

int main(int argc,char * argv[]) {
    MoneyClass test(34.569);
    MoneyClass test2;
    MoneyClass test3(14,14);
    std::cout << test<<std::endl;
    std::cout << test2<<std::endl;
    std::cout << test3<<std::endl;

    return 0;
}
