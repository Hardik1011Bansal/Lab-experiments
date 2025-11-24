//3.Open a file, read its content line by line, and display each line on the console.
#include <stdio.h>

int main() 
{
    FILE *ptr;
    char a[100];

    ptr=fopen("test.txt","r");   
    if(ptr==NULL) 
    {
        printf("File doesnot exist");
        return 1;
    }

    while (fgets(a,sizeof(a),ptr)!=NULL)
    {  
        printf("%s",a);                          
    }

    fclose(ptr); 
    return 0;
}
