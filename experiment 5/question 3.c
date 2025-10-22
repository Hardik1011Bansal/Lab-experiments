/*3.WAP to read a list of integers and store it in a single dimensional array. Write a C program to find the frequency of a particular number in a list of integers*/
#include <stdio.h>

int main() 
{
    int n,b,count=0;
    do
    {
        printf("Enter the number of elements in the array :");
        scanf("%d",&n);
    }while(n<=0);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d entry of the array",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter the number whose frequency is to be found :");
    scanf("%d",&b);
    for(int i=0;i<n;i++)
    {
    if(a[i]==b)
        {
            count++;
        }
    }
    printf("%d",count);
    

    return 0;
}
