#include<stdio.h>
#include<stdlib.h>
int main(){
struct node
{
    int data;
    struct node* link;
};
struct node* head;
head=0;
struct node* newnode;
struct node* temp;
int n;
printf("Enter number of nodes : ");
scanf("%d",&n);
while(n--){
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data : ");
    scanf("%d",&newnode->data);
    if(head==0){
     temp= head = newnode;
    //  temp= newnode;
    }
    else{
        temp->link= newnode;
        temp=newnode;
    }
 
} 
  temp = head;        // if we use here head pointer then we can not change or modify our linkedlist again
    while(temp!=0){
        printf("%d\t",temp->data);
        temp = temp->link;
    }
printf("\n");
    return 0;
}