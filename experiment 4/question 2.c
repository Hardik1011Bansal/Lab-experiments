//2.	Declare a local variable inside a function and try to access it outside the function. Compare this with accessing the global variable from within the function.
#include <stdio.h>
int a=6;
int sum()
{
    int b=4;
    int sum = a+b;
    return sum;
}
int main()
{
    printf("a:%d\n",a); 
    //printf("b:%d",b) this will throw an error as b is not accessible here because is a local variable and defined in the sum function . and we are trying to use it outside the sum function 
    
    printf("%d",sum());
    

    return 0;
}
