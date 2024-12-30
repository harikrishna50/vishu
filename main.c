#include <stdio.h>
#include "ArithmeticOperations.h"

//#include "ArithmeticOperations.c"

extern int c;

int main()
{
    printf("external c value is : %d\n",c);

    printf("sum of 14, 16 is : %d\n", add(14, 16));
    printf("sum of 18, 16 is : %d\n", add(18, 16));
    printf("product of 10, 28 is : %d\n", mul(10, 28));
    printf("product of 1380, 27 is : %d\n", mul(1380, 27));
    printf("Subtraction of 128, 31 is : %d\n", sub(128, 31));
    printf("Subtraction of 10, 28 is : %d\n", sub(10, 28));
    printf("Division of 10, 28 is : %f\n", div(10, 28));
    printf("Division of 28, 9 is : %.2f\n", div(28, 9));
    printf("external c value is : %d\n",c);


    return 0;

}
