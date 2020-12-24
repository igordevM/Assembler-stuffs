#include <iostream>
#include <stdio.h>

int main() {
    int x = 4;
    asm(
    "imul $3, %0 \n"
    "add $1, %0 \n"
    :"+r"(x)
    ::"cc"
    );
    std::cout<<"Answer: "<< x;
    return 0;
}