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
    // Insert element at begining possition
    struct node *insertnode;
    insertnode = (struct node *)malloc(sizeof(struct node)); // insertnode is a pointer it is not a part of node,it store the address of node
    printf("Enter data you want to insert : ");
    scanf("%d", &insertnode->data);
    insertnode->next = head;
    head = insertnode;

    // Display part/code of linkedlist
    temp = head;
    while (temp != 0)
    {
        printf("Linked list elements are : %d \n", temp->data);
        temp = temp->next;
    }
    return 0;
}