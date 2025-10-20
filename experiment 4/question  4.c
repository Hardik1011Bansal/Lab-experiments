//4.Declare a static local variable inside a function. Observe how its value persists across function calls.
#include <stdio.h>

int sum()
{
    static int a=0;
    int sum =a+5;
    a=sum;
    printf("%d\n",sum);
    return sum;
}

int main()
{
    sum();
    sum();
    sum();
    sum();
    
   return 0;
}
/* If a normal variable is formed then it gets destroyed as soon as the function terminates so if we have used a normal variable here then the output would have been :
5
5
5
5
*/
   
