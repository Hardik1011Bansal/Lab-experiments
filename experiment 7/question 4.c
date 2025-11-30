/* 4. Create a union containing 6 strings: name, home_address, hostel_address,city, state and zip. Write a C program to display your present address.*/

#include <stdio.h>

union Address
{
    char name[100];
    char home_address[100];
    char hostel_address[100];
    char city[50];
    char state[50];
    char zip[10];
};

int main()
{
    union Address a;
    
    printf("Enter your present address (hostel address): ");
    scanf("%s",a.hostel_address); 

    
    printf("%s", a.hostel_address);

    return 0;
}
