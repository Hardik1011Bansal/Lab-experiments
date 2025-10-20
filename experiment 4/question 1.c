//1.	Declare a global variable outside all functions and use it inside various functions to understand its accessibility.
#include <stdio.h>
int a=0;
int sum()
{
    int sum = a+5;
    a=sum; // Value of a updated to sum that is a+5
    return a;
}

int sub()
{
    int diff= a-2;
    a=diff; // Value of a updated to diff that is a-2
    return a;
}
int main()
{
    printf("%d\n",a); // The value of a is 0
    sum();
    printf("%d\n",a);
    sub();
    {
        printf("%d\n",a);
    }

    return 0;
}
/*The output is :
0
5
3
This is bcoz a is a global variable so we could use it was accessible in different functions like sub and sum */
