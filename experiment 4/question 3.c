//3.Declare variables within different code blocks (enclosed by curly braces) and test their accessibility within and outside those blocks.
#include <stdio.h>

int sum();
int sub();

int main()
{
   // printf("Value of different local variables are :%d %d %d %d",a,b,c,d);  If we execute this then there will be errors as a,b,c,d are local variables of different functions and we are trying to access them outside their functions
    printf("%d\n%d",sum(),sub());
    
    return 0;
}
int sum()
{
    int a=6,b=4;
    return a+b;
}

int sub()
{
    int c=5,d=4;
    return c-d;
}
