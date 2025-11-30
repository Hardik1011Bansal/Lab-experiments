// 2. Write a program to define a function in directives.
#include <stdio.h>
#define square(x) ((x)*(x))
int main()
{
    int num;

    printf("Enter a number:");
    scanf("%d",&num);
    printf("%d",square(num));
    return 0;
}
