// 2. Write a program to apply left shift and right shift operator. 
#include <stdio.h>

int main()
{
    int a;

    printf("Enter a number:");
    scanf("%d",&a);
    printf("\nleft shift =%d\n",a<<1);
    printf("left shift=%d\n",a<<2);
    printf("Right shift=%d\n",a>>1);
    printf("Right shift=%d",a>>2);

    return 0;
}
