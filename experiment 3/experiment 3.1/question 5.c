//5.WAP using ternary operator, the user should input the length and breadth of a rectangle, one has to find out which rectangle has the highest perimeter. The minimum number of rectangles should be three

#include <stdio.h>

int main()
{
    int l1, b1, l2, b2, l3, b3;
    int p1, p2, p3, max;
    printf("Enter length and breadth of Rectangle 1:");
    scanf("%d %d",&l1,&b1);
    printf("Enter length and breadth of Rectangle 2:");
    scanf("%d %d", &l2, &b2);
    printf("Enter length and breadth of Rectangle 3:");
    scanf("%d %d", &l3, &b3);

    p1=2*(l1 + b1);
    p2=2*(l2 + b2);
    p3=2*(l3 + b3);
    max=(p1>p2 && p1>p3) ? 1:(p2>p1 && p2>p3) ? 2:3;

    printf("\nPerimeter of Rectangle 1: %d", p1);
    printf("\nPerimeter of Rectangle 2: %d", p2);
    printf("\nPerimeter of Rectangle 3: %d\n", p3);

    (max == 1) ? printf("Rectangle 1 has the highest perimeter.\n") :
    (max == 2) ? printf("Rectangle 2 has the highest perimeter.\n") :
                 printf("Rectangle 3 has the highest perimeter.\n");

    return 0;
}
