//1. Write a program to create a shared library for performing arithmetic functions.
// File 1
#ifndef ARITHMETIC_H
#define ARITHMETIC_H

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int divide(int a, int b);

#endif
// File 2
#include "arithmetic.h"

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    return a / b;
}
// File 3
#include <stdio.h>
#include "arithmetic.h"

int main()
{
    int a = 20, b = 10;

    printf("Addition: %d\n", add(a, b));
    printf("Subtraction: %d\n", sub(a, b));
    printf("Multiplication: %d\n", mul(a, b));
    printf("Division: %d\n", divide(a, b));

    return 0;
}
