//1.WAP to read a list of integers and store it in a single dimensional array. Write a C program to print the second largest integer in a list of integers.
#include <stdio.h>

int main() 
{
    int n;
    do
    {
    printf("Enter the number of enteries in the array. The number of elements can be a positive number only  :");
    scanf("%d",&n);
    }while(n<=0);
    
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d entry of the array :",i+1);
        scanf("%d",&a[i]);
    }
    int largest=a[0];
    int sec_largest=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>largest)
        {
            largest=a[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if((a[i]!=largest) &&(a[i]>sec_largest))
        {
            sec_largest=a[i];
        }
    }
          printf("%d",sec_largest);
    
    
  
    
    return 0;
}
