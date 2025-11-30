//2.WAP a C program to Convert temperature from Celsius to Fahrenheit using the formula:F=(C*9/5)+32.
#include <stdio.h>
int main()
{
    float temp;
    printf("Enter the temperature:");
    scanf("%f",&temp);
    printf("%.2f",(temp*(9.0/5))+32);
    return 0;
}
