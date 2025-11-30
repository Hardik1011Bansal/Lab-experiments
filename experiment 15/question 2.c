/* 2. Write a program to use shared library in other program. */
#include <stdio.h>
#include "arithmetic.h"   

int main()
{
    int a=24,b=4;
    printf("Sum:%d\n",add(a, b));
    printf("difference:%d\n",sub(a, b));
    printf("Product:%d\n",mul(a, b));
    printf("Division: %d\n",divide(a, b));

    return 0;
}
