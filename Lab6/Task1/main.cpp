#include <iostream>
#include <stdio.h>

int main() {
    int x = 1, y = 3, z, ans;
    asm(
    "clc \n"
    "mov %[X], %[Z] \n"
    "add %[Y], %[Z] \n"
    "cmp $4, %[Z] \n"
    "jl F1\n"
    "add $2, %[Y] \n"
    "mov %[Y], %[ANS] \n"
    "jmp Exit\n"
    "F1:\n"
    "mov %[X], %[ANS]\n"
    "Exit:"
        :[X]"+r"(x), [Y]"+r"(y), [Z]"+r"(z), [ANS]"+r"(ans)
    );
    std::cout<< "x + y = " << z <<"\nAnswer: "<< ans << '\n';
    return 0;
}