//1.WAP a C program to calculate the area and perimeter of a rectangle based on its length and width.
#include <stdio.h>
int main()
{
    int l,b;
    printf("Enter the numbers:");
    scanf("%d%d",&l,&b);
    printf("%d\n%d",2*(l+b),l*b);
    return 0;
}
