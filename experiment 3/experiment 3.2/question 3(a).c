/*3.	WAP to generate the following set of output.
a.	
  1
 2 3
4 5 6*/

#include <stdio.h>

int main() 
{
    int a=1,rows;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<rows-i-1;j++)
        {
            printf(" ");
        }
        
        for(int k=0;k<=i;k++)
        {
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}
