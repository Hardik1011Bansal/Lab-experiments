/*3.	WAP to generate the following set of output.

b.	 
   1
  1 1
 1 2 1
1 3 3 1
 */
#include<stdio.h>

int ncr(int n,int r)
{
int product1=1,product2=1;
for(int i=1;i<=r;i++)
{
    product1=product1*n;
    product2*=i;
    n--;
}

  return (product1/product2); 
}

int main()
{
    int rows,r;
    printf("Enter the number of rows:");
    scanf("%d",&rows);
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<rows-i-1;j++)
        {
            printf(" ");
        }
        int r=0;
        for(int k=1;k<=i+1;k++)
        {
            printf("%d ",ncr(i,r));
            r++;
        }
        printf("\n");
    }
    
    return 0;
}
