#include <iostream>
#include <stdio.h>

int main() {
    int n, x, i = 0, a = 0;

    std::cout << "Enter the n: ";
    std::cin >> n;
    std::cout << "Enter the x: ";
    std::cin >> x;

    asm(
    "clc \n"
    "Loop: \n"
    "cmp $0, %[I] \n"
    "je F1 \n"
    "add %[X], %[A] \n"

    "F1: \n"
    "incl %[I] \n"
    "mov %[N], %%eax \n"
    "cmp %%eax, %[I] \n"
    "jl Loop \n"
    "Exit:"
    :[X]"+r"(x), [N]"+m"(n), [A]"+m"(a), [I]"+m"(i)
    ::"%eax", "cc"
    );
    std::cout << "Answer: " << a;
    return 0;
}