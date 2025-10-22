/*3.Write a function that accepts pointers as parameters. Pass variables by reference using pointers and modify their values within the function.*/
#include<stdio.h>
void change(int *a,int *b);

int main()
{
    int a=7,b=10;
    printf("Before changing :\na:%d\nb:%d\n",a,b);
    
    change(&a,&b);
    printf("After changing : \na:%d\nb:%d",a,b);
  
     return 0;
}
void change(int *a,int *b)
{
    *a=18;
    *b=45;
    
}
