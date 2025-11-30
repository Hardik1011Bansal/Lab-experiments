//3.WAP to check if three points (x1,y1), (x2,y2) and (x3,y3) are collinear or not.

#include <stdio.h>

int main()
{
    int x1, y1, x2, y2, x3, y3;
    int p;
    printf("Enter x1 and y1:");
    scanf("%d%d", &x1, &y1);
    printf("Enter x2 and y2:");
    scanf("%d%d", &x2, &y2);
    printf("Enter x3 and y3:");
    scanf("%d%d", &x3, &y3);

    p=x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2);
    if(p==0)
    {
    printf("The points are Collinear\n");
    }
    else
    {
        printf("The points are NOT Collinear\n");
    }

    return 0;
}
