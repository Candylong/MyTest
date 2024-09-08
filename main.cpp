#include <iostream>
//#include "third.h"
int sum(int a, int b)
{
    return a + b;
}
extern int multi(int a, int b);

int main(int argc, char** argv)
{
    int result = multi(1, 2);
    std::cout<< "result: "<< result <<std::endl;
    std::cout<< "hello world!"<<std::endl;
    return 0;
}