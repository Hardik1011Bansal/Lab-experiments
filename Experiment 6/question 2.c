/*2.Develop a recursive function GCD (num1, num2) that accepts two integer arguments. Write a C program that invokes this function to find the greatest common divisor of two given integers. */
#include <stdio.h>

int GCD(int a,int b)
{
   if((b==0)&& (a<0))
   {
       return -a;
   }
   else if(b==0)
   {
       return a;
   }
   else 
   return GCD(b,a%b);
   
    
}

int main() 
{
    int a,b;
    printf("Enter the two numbers :");
    scanf("%d %d",&a,&b);
    printf("%d",GCD(a,b));
    return 0;
}
