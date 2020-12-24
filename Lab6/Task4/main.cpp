#include <iostream>
#include <stdio.h>

int main() {
    int N = 0;
    double eps, S, sum = 0, sum2 = 0, epsChange = 0;

    std::cout << "Enter the eps: ";
    std::cin >> eps;

    asm(
    "Start:\n"
    "fldl %[EPS]\n" // eps
    "addq $1, %[N]\n"
    "NFoundLoop:\n"
    "fldl %[SUM]\n"
    "fstl %[SUM2]\n"
    "fild %[N]\n"
    "fsqrt\n"
    "testl $1, %[N]\n"
    "je evenCondition\n"
    "fld1 \n"
    "fldz \n"
    "fsubp \n"
    "jmp skipEvenCondition\n"
    "evenCondition:\n"
    "fld1 \n"
    "skipEvenCondition: \n"
    "fdivp \n" //New PrevSum eps
    "faddp  \n" //NewSum eps
    "fstl %[SUM] \n" //NewSum->SUM
    "fldl %[SUM2] \n" //PrevSum NewSum eps
    "fsubp \n" //epsNew eps
    "fabs \n" //|newEps| eps
    "fstl %[CHNG] \n" // step eps
    "addq $1, %[N] \n"
    "fcomip \n"
    "ja NFoundLoop \n"
    "fldl %[SUM] \n"
    "fstpl %[S] \n"
    :[S]"+m"(S), [N]"+m"(N), [EPS]"+m"(eps), [SUM]"+m"(sum),[SUM2]"+m"(sum2),[CHNG]"+m"(epsChange)
    ::"cc"
    );
    std::cout<<"task 4: op: "<<N-1<<" res:"<<S<<"\n";
    return 0;
}