/*3.Develop a recursive function FIBO (num) that accepts an integer argument. Write a C program that invokes this function to generate the Fibonacci sequence up to num.  */
#include <stdio.h>

int FIBO(int num)
{
   
    if((num==1) || (num==2))
    {
        return num-1;
    }
   else
    {
   return FIBO(num-1)+FIBO(num-2);
    }
}

int main() 
{
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
     if(num<=0)
    {
        printf("Invalid input");
        return 1;
    }
    for(int i=1;i<=num;i++)
    {
         printf("%d\t",FIBO(i));
    }
   
    return 0;
}
