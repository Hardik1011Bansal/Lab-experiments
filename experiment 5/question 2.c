//2.WAP to read a list of integers and store it in a single dimensional array. Write a C program to count and display positive, negative, odd, and even numbers in an array.
#include <stdio.h>

int main() 
{
    int n,even_count=0,odd_count=0,positive_count=0,negative_count=0,zero_count=0;
    do
    {
    printf("Enter the number of enteries in the array. The number of elements can be a positive number only  :");
    scanf("%d",&n);
    }while(n<=0);
    
    int a[n];
     for(int i=0;i<n;i++)
    {
        printf("Enter the %d entry of the array ",i+1);
        scanf("%d",&a[i]);
        if(a[i]>0)
        {
            positive_count++;
        }
        else if(a[i]<0)
        {
            negative_count++;
        }
        else
        {
            zero_count++;
        }
        
        if(a[i]%2==0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
        
    }
    printf("Positive numbers:%d \nNegative numbers:%d \nZeroes:%d \nEven numbers:%d \nOdd numbers:%d",positive_count,negative_count,zero_count,even_count,odd_count);
    
    
    return 0;
}
