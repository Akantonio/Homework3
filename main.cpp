#include "MoneyClass.h"
#include <iostream>

int main(int argc,char * argv[]) {
    MoneyClass test(34.568);
    MoneyClass test2;
    MoneyClass test3(10,10);
    MoneyClass test4(-444);
    MoneyClass test5= test + test4;
    MoneyClass test6(404);
    test+=test3;
    std::cout << test<<std::endl;
    std::cout << test2<<std::endl;
    std::cout << test3<<std::endl;
    std::cout << test4<<std::endl;
    std::cout << test5<<std::endl;
    std::cout << test6<<std::endl;

    return 0;
}
