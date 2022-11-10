#include<stdio.h> 
#include<stdlib.h> 
    struct node
    {
        int data;
        struct node* next;

    };
    struct node* head,*temp,*newnode;
void deleteelementAtanypossition(){
    int i=1;
    int pos;
    printf("Enter the possition for deleteing linked list : ");
    scanf("%d",&pos);
    struct node* nextnode;
    temp = head;
    while(i<pos-1){
    temp=temp->next;
    i++;
    }
    nextnode=temp->next;
    temp->next=nextnode->next;
    free(nextnode);
}
 // ................................................
    void deleteelementAtend(){
        struct node* previousnext;
          temp =head;
          while(temp->next!=0){
            previousnext=temp;
            temp=temp->next;
          }
          previousnext->next=0;
          free(temp);              // USED TO FREE MEMORY LOCATION OF UNUSED NODE
          printf("Deleted is successfull\n");
    }

// ....................................................

void deleteelementAtbegining(){
    temp=head;
    head=head->next;
    free(temp); 
     printf("Deleted is succesfull\n");
}

// ....................................................

void display(){
    temp = head;
    while(temp!=0){
        printf("Linked list element is : %d\n",temp->data);
        temp=temp->next;
    }
}

// .......................................................

void linkedListinput(){
 
   newnode=(struct node*)malloc(sizeof(struct node));
   printf("Enter linked list element : ");
   scanf("%d",&newnode->data);
   newnode->next=0;
   if(head==0){
    head =temp = newnode;
   }
   else{
    temp->next=newnode;
    temp=newnode;
   }
   return ;
}

// ........................................................

int main(){
  
    int n;
    printf("Enter number of linked list node : ");
    scanf("%d",&n); 
      head=0;
    while(n--){
        linkedListinput();   
    }

  display();
//....................................................

/*  deleteelementAtbegining();
   display();
*/
// ....................................................

/*  deleteelementAtend();
  display();
  */
// ....................................................

deleteelementAtanypossition();
display();

    return 0;
}