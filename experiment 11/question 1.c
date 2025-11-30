/* 1. Write a program to apply bitwise OR, AND and NOT operators on bit level. */

#include <stdio.h>

int main()
{
    int a, b;
    
    printf("Enter first number:");
    scanf("%d",&a);
    
    printf("Enter second number:");
    scanf("%d",&b);
    
    printf("Bitwise AND of %d & %d=%d\n", a, b, a & b);
    printf("Bitwise OR of %d and %d = %d\n", a, b, a | b);
    
    printf("Bitwise NOT of %d=%d\n", a, ~a);
    printf("Bitwise NOT of %d=%d", b, ~b);

    return 0;
}
