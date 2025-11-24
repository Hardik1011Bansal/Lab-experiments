//2.Open an existing file and read its content character by character, and then close the file.
#include <stdio.h>

int main() 
{
    FILE *ptr;
    char ch;
    ptr=fopen("test.txt","r");  
    if(ptr==NULL) 
    {
        printf("File does not exist");
        return 1;
    }

    while ((ch=fgetc(ptr))!=EOF)
    { 
        printf("%c",ch);
    }

    fclose(ptr);  
    return 0;
}
