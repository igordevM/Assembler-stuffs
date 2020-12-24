#include <iostream>
#include <stdio.h>


void fun_task4_toASCII(int num)
{
    asm(
    "or $48, %[num]"
    :[num]"+r"(num)
    ::"cc"
    );
    std::cout<<"Int to ASCII: "<<(char)num<<std::endl;
}

void fun_task4_fromASCII(char num)
{
    asm(
    "and $15, %[num]"
    :[num]"+r"(num)
    ::"cc"
    );
    std::cout<<"ASCII to Int: "<<(int)num<<std::endl;
}

void fun_task4_toTOP(char letter)
{
    std::cout<<letter<<" -> ";
    asm(
    "xor $32, %[num]"
    :[num]"+r"(letter)
    ::"cc"
    );
    std::cout<<letter<<std::endl;
}

void chastnoe(int num1 = 50, int num2 = 7)
{
    asm(
    "movl %[NUM1], %%eax\n"
    "movl $0, %%edx\n"
    "div %[NUM2]\n"
    "movl %%eax, %[NUM1]"
    : [NUM1]"+r"(num1)
    :[NUM2]"r"(num2)
    :"%eax","%edx", "cc"
    );
    std::cout<<num1<<std::endl;
}


int main(){
    int num;

    std::cin>>num;
    fun_task4_fromASCII((char)num);
    fun_task4_toASCII(num);

    for(int i=97;i<=122;i++)
    {
        fun_task4_toTOP((char)i);
    }
    for(int i=65;i<=90;i++)
    {
        fun_task4_toTOP((char)i);
    }


    chastnoe();

    return 0;
}