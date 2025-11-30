/* 1. Write a C program that uses functions to perform the following operations:
   a. Reading a complex number.
   b. Writing a complex number.
   c. Addition and subtraction of two complex numbers.
*/

#include <stdio.h>

struct Complex 
{
    int rp;
    int ip;
};

struct Complex read() 
{
    struct Complex c;
    printf("Enter real part: ");
    scanf("%d",&c.rp);
    printf("Enter imaginary part: ");
    scanf("%d",&c.ip);
    return c;
}

void display(struct Complex c) 
{
    printf("%d + %di\n",c.rp,c.ip);
}

struct Complex add(struct Complex c1,struct Complex c2)
{
    struct Complex result;
    result.rp = c1.rp+c2.rp;
    result.ip = c1.ip+c2.ip;
    return result;
}

struct Complex subtract(struct Complex c1, struct Complex c2)
{
    struct Complex result;
    result.rp=c1.rp-c2.rp;
    result.ip=c1.ip-c2.ip;
    return result;
}

int main() 
{
    struct Complex num1, num2, sum, difference;

    printf("Enter first complex number:\n");
    num1=read();

    printf("Enter second complex number:\n");
    num2 = read();

    sum = add(num1, num2);
    difference = subtract(num1, num2);
    printf("\nFirst Complex Number: ");
    display(num1);

    printf("Second Complex Number: ");
    display(num2);

    printf("\nAddition Result: ");
    display(sum);

    printf("Subtraction Result: ");
    display(difference);

    return 0;
}
