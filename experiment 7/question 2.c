#include <stdio.h>

struct Employee
{
    char name[100];
    float basic;
    float gross;
};

int main()
{
    struct Employee emp[100];
    float DA;
    
    for(int i = 0; i < 100; i++)
    {
        printf("\nEmployee %d:\n", i + 1);
        printf("Enter name: ");
        scanf("%s", emp[i].name);
        
        printf("Enter basic pay: ");
        scanf("%f", &emp[i].basic);
        
        DA = 0.52 * emp[i].basic;         
        emp[i].gross = emp[i].basic + DA;  
    }

    for(int i = 0; i < 100; i++)
    {
        printf("Name:%s\nGross Salary:%.2f\n",emp[i].name,emp[i].gross);
    }

    return 0;
}
