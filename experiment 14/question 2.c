// 2. Write a program to use static library in other program.
#include <stdio.h>
#include "arithmetic.h"   

int main()
{
    int x=2,y=5;
    printf("Sum:%d\n",add(x, y));
    printf("difference:%d\n",sub(x, y));
    printf("Product:%d\n",mul(x, y));
    printf("Division: %d\n",divide(x, y));

    return 0;
}
