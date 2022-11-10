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
    int count = 0;
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
        count++;
    }
    // Insert element at any valid possition
    int pos;
    printf("Enter the possition : ");
    scanf("%d", &pos);
    if (count < pos)
    {
        printf("Invalid possition to insert element in the linkedlist\n");
    }
    else
    {
        struct node *insertAtany;
        insertAtany = (struct node *)malloc(sizeof(struct node)); // node creation
        struct node *temp2;
        temp2 = head;
        int i = 1;
        while (i < pos)
        {
            temp2 = temp2->next;
            i++;
        }
        printf("Enter the data you want to insert at %d th possition ", pos);
        scanf("%d", &insertAtany->data);
        insertAtany->next = temp2->next;
        temp2->next = insertAtany;
    }

    // Display part/code of linkedlist
    temp = head;
    while (temp != 0)
    {
        printf("Linked list elements are : %d \n", temp->data);
        temp = temp->next;
    }
    return 0;
}