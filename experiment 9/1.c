//1.	Write a program to create a new file and write text into it.
#include<stdio.h>

int main() 
{
    FILE *ptr;                 
    ptr=fopen("file.txt","w");  
    fprintf(ptr,"Hello everyone how are you.");
    fclose(ptr);
    printf("File is created");

    return 0;
}
