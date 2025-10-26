/*4.Develop a C function ISPRIME (num) that accepts an integer argument and returns 1 if the argument is prime, and 0 otherwise. Write a C program that invokes this function to generate prime numbers between the given ranges.  */
#include <stdio.h>

int ISPRIME(int num)
{
    int p=1;
    if(num==1)
    {
        p=0;
    }
    
    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            p=0;
            break;
        }
    }
    return p;   
}

int main() 
{
    int num1,num2;
    printf("Enter the range :");
    scanf("%d%d",&num1,&num2);
    if((num1<=0) || (num2<=0))
    {
        printf("Prime cannot be evaluated for non positive numbers.Please enter a positive range ");
        return 0;
    }
    if(num1>num2)
    {
        int temp=num1;
        num1=num2;
        num2=temp;
    }
    for(int i=num1;i<=num2;i++)
    {
        if(ISPRIME(i)==1)
        {
            printf("%d\t",i);
        }
    }
    return 0;
}
