/*2.Perform pointer arithmetic (increment and decrement) on pointers of different data types. Observe how the memory addresses change and the effects on data access.*/
#include<stdio.h>

int main()
{
    int a=5;
    float b=2.3;
    char c ='?';
    int *d=&a;
    float *e=&b;
    char *f=&c;
    
    
    printf("%u\n",d);
    d=d+2;
    printf("%u\n",d);
    printf("%u\n",e);
    printf("%u\n",f);
    printf("%u\n",++e);
    printf("%u\n",--f);
    
    /*It is clear from the above example that int takes up 4 bytes in my system  , float takes up 4 bytes and char takes up 1 byte */
     
    
   return 0;
}
