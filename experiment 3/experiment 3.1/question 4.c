//4.According to the gregorian calendar, it was Monday on the date 01/01/01. If Any year is input through the keyboard write a program to find out what is the day on 1st January of this year.

#include<stdio.h>

int main()
{
    int year,days=0,a;
    printf("Enter any year:");
    scanf("%d", &year);

    for(int i=2001;i<year;i++)
    {
        if((i%4 ==0 && i%100 !=0) || (i%400 ==0))
        {
            days+=366;  
        }
        else
        {
            days+=365;  
        }
    }

    a=days % 7;

    if(a==0)
    {
        printf("Monday");
    }
    else if(a==1)
    {
        printf("Tuesday");
    }
    else if(a==2)
    {
        printf("Wednesday");
    }
    else if(a==3)
    {
        printf("Thursday");
    }
    else if(a==4)
    {
        printf("Friday");
    }
    else if(a==5)
    {
        printf("Saturday");
    }
    else if(a==6)
    {
        printf("Sunday");
    }

    return 0;
}
