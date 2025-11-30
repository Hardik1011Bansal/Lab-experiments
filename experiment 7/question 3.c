/* WAP to create a Book structure containing book_id, title, author name and price. Write a C program to pass a structure as function argument and print the book details.
*/

#include <stdio.h>

struct Book
{
    int book_id;
    char title[100];
    char author[100];
    float price;
};

void display(struct Book b);   

int main()
{
    struct Book b1;

    printf("Enter Book ID:");
    scanf("%d", &b1.book_id);

    printf("Enter Book Title:");
    scanf("%s", b1.title);

    printf("Enter Author Name:");
    scanf("%s", b1.author);
    printf("Enter Price: ");
    scanf("%f", &b1.price);

    display(b1);  
    return 0;
}

void display(struct Book b)    
{
    printf("Book ID: %d\n", b.book_id);
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Price: %.2f\n", b.price);
}
