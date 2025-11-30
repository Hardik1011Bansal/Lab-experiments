//3.Write a program that prompts the user to enter their name and age.
#include <stdio.h>
int main()
{
    char name[50];
    int age;
    printf("Enter your name and age ");
    scanf("%s %d",name,&age);
    printf("%s\n%d",name,age);
    return 0;
}
