#include <iostream>
#include <memory>
//#include "third.h"
int sum(int a, int b)
{
    return a + b;
}
extern int multi(int a, int b);

void display() {
    int* data = nullptr;
    *data = 6;
    *data = 8;
    *data = 9;
}

int main(int argc, char** argv)
{
    int* p = new int(10);
    delete p;
    p = nullptr;
    int result = multi(1, 2);
    std::cout<< "result: "<< result <<std::endl;
    std::cout<< "hello world!"<<std::endl;
    return 0;
}