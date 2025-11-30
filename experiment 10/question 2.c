//2. Write a program to insert item in middle of the linked list. 

#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

void printList(struct Node *head)
{
    struct Node *temp = head;
    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void insertAfter(struct Node *head, int position, int value)
{
    struct Node *temp = head;
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;

    for(int i = 1; i < position && temp != NULL; i++)
    {
        temp = temp->next;
    }

    if(temp == NULL)
    {
        printf("Position is out of range.\n");
        free(newNode);
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

int main()
{
    struct Node *head = (struct Node*)malloc(sizeof(struct Node));
    struct Node *second = (struct Node*)malloc(sizeof(struct Node));
    struct Node *third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    printf("Original Linked List: ");
    printList(head);

    int value = 25;  
    int position = 2; 

    insertAfter(head, position, value);

    printf("Linked List after insertion: ");
    printList(head);

    struct Node *temp;
    while(head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
