/*5.Ramanujan Number is the smallest number that can be expressed as the sum of two cubes in two different ways. WAP to print all such numbers up to a reasonable limit.for a number L=20(that is limit)*/
#include<stdio.h>

int sum(int a,int b)
{
    return ((a*a*a)+(b*b*b));
}

int main()
{
    int sum1,sum2;
    for(int i=1;i<=19;i++)// i<=19 each number has already been operated with 20
    {
        
        for(int j=i+1;j<=20;j++)
        {
            sum1=0;
            sum1=sum(i,j);
            for(int m=i+1;m<=19;m++)
            {
                for(int n=m+1;n<=20;n++)
                {
                    sum2=0;
                    if(((i==m) || (i==n)) && ((j==n) || (j==m)))
                    {
                        continue;
                    }
                    sum2=sum(m,n);
                    if(sum1==sum2)
                    {
                        printf("%d\t",sum1);
                    }
                }
            }
       }
    }
    
    return 0;
}
