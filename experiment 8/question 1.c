/*1.	Declare different types of pointers (int, float, char) and initialize them with the addresses of variables. Print the values of both the pointers and the variables they point to*/
#include<stdio.h>

int main()
{
    int a=5;
    float b=2.3;
    char c ='?';
    int *d=&a;
    float *e=&b;
    char *f=&c;
    
    printf("%p\n",d);
    printf("%p\n",e);
    printf("%p\n",f);
    
   
    printf("%d\n",*d);
    printf("%f\n",*e);
    printf("%c\n",*f);
    
     
    
    
    return 0;
}
