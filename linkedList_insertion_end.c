#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    // Temp pointer used to traverse the whole linkedlist;
    struct node *newnode;
    struct node *temp;
    struct node *head;
    head = 0;
    int n;
    printf("How many element you want to insert : ");
    scanf("%d", &n);
    while (n--)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter linkedlist element : ");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }
    // INsert element at end of the linkedlist
    struct node *insertend;
    insertend = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data you want to insert at end : ");
    scanf("%d", &insertend->data);
    insertend->next = 0;
    struct node *temp1;
    temp1 = head;
    while (temp1->next != 0)
    {
        temp1 = temp1->next;
    }
    temp1->next = insertend;

    // Display part/code of linkedlist
    temp = head;
    while (temp != 0)
    {
        printf("Linked list elements are : %d \n", temp->data);
        temp = temp->next;
    }
    return 0;
}