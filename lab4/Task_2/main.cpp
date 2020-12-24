#include <iostream>
#include <stdio.h>

int main() {
    int x = 4;
    asm(
        "imul $3, %[X] \n"
        "add $1, %[X] \n"
        :[X]"+r"(x)
        ::"cc"

    );
    std::cout<<"Answer: "<< x;
    return 0;
}