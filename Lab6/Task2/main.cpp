#include <iostream>
#include <stdio.h>

int main() {
    float x = 2, y = 1, z;
    float a = 2, b = -2, d = -1;

    asm(
    "clc \n"
    //    "mov %[X], %[Z] \n"
    //    "dec %[Z] \n"
    //    "mov %[Z], %[Y] \n"
    "fld %[X] \n"
    "fsub %[Y] \n"
    "fstp %[Z] \n"
    "fld %[X] \n"
    "fsub %[Y] \n"
    "fstp %[Y] \n"
    "cmp $0, %[Z] \n"
    "jl F1 \n"
    "jmp F2 \n"

    "F1:\n"
//    "imul $-1, %[Z], %[Z]\n"
    "fld %[Z] \n"
    "fmul %[D] \n"
    "fstp %[Z] \n"

    "F2: \n"
    "cmp $5, %[Z] \n"
    "jl F3 \n"
    "jmp F4 \n"

    "F3: \n"
//    "imul $2, %[X], %[X]\n"
//    "mov %[X], %%eax\n"
//    "mul %[Y]\n"
//    "mov %%eax, %[X]\n"
    "fld %[X] \n"
    "fmul %[Y] \n"
    "fmul %[A] \n"
    "fstp %[X] \n"
    "jmp Exit \n"

    "F4: \n"
//    "imul $-2, %[X], %[X]\n"
    "fld %[X] \n"
    "fmul %[B] \n"
    "fstp %[X] \n"
    "Exit:"
        :[Z]"+m"(z), [X]"+m"(x), [Y]"+m"(y), [A]"+m"(a), [B]"+m"(b), [D]"+m"(d)
        ::"cc"
    );
    std::cout << "Answer: " << x;
    return 0;
}