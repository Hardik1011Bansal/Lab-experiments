/*5.Develop a function REVERSE (str) that accepts a string argument. Write a C program that invokes this function to find the reverse of a given string.   */
#include<stdio.h>
#include<string.h>

void REVERSE(char str[100])
{
       for(int i=strlen(str)-1;i>=0;i--)
       {
           printf("%c",str[i]);
       }
}

int main() 
{
    char str[100];
    printf("Enter the string :");
    fgets(str,sizeof(str),stdin);
    if(str[strlen(str)-1]=='\n')
    {
        str[strlen(str)-1]='\0';
    }
    REVERSE(str);
    
    return 0;
}
