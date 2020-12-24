#include <iostream>
#include <stdio.h>

int main() {
    int x = 3, y = 2, flag = 0;
    asm(
    "clc \n"
    "add %[Y], %[X] \n"
    "jc F1 \n"
    "jmp F2 \n"
    "F1: \n"
    "mov $1, %[Flag] \n"
    "F2:"
    :[X]"+r"(x), [Y]"+r"(y), [Flag]"+r"(flag)
    );
    std::cout<<"Answer: "<< x <<" Flag: "<<flag;
    return 0;
}