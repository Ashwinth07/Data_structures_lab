#include<stdio.h>
#include<stdlib.h>

struct node
{
      int data;
      struct node* next;
}*head,*temp,*tail;


void createlist(int n)
{
    int num;
    for(int i=0;i<n;i++)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        printf("enter no");
        scanf("%d",&num);
        temp->data=num;
        temp->next=NULL;
       
        
        if(temp==NULL){
            printf("memory is not allocated");
        }
        else if(head==NULL)
        {
            head=temp;
            tail=temp;
        }
        else{
            tail->next=temp;
            tail=tail->next;
        }
        
    }
}
void display()
{      printf("\n\n");
       printf("===========================");
       printf("\n");
        if(head==NULL){
            printf("memory is not allocated");
        }
        else{
            temp=head;
            while(temp!=NULL)
            {
              printf("-->%d",temp->data);
              temp=temp->next;
            }
        }
}
void clone()
{      printf("\n\n");
       printf("===========================");
       printf("\n");
        if(head==NULL){
            printf("List is not created");
        }
        else{
            temp=head;
            printf("After clonning\n");
            while(temp!=NULL)
            { 
              struct node *newlist;
              struct node *t;
              if(newlist==NULL)
              {
                  newlist=(struct node*)malloc(sizeof(struct node));
                  newlist->data=temp->data;
                  newlist->next=NULL;tail=newlist;
              }
              else
              {
              t=(struct node*)malloc(sizeof(struct node));
              t->data=temp->data;
              t->next=temp->next;
              printf("-->%d\n",t->data);
              temp=temp->next;
              }
            }
        }
}

void sortList()
    {   int trav;
          
        if(head == NULL) 
        {  
            printf("list is empty");  
        }  
        else
        {   temp=head;
            while(temp!= NULL) 
            {  
                tail=temp->next;
                while(tail != NULL) 
                {  
                    if(temp->data > tail->data) 
                    {  
                        trav=temp->data;  
                        temp->data=tail->data; 
                        tail->data = trav;  
                    }  
                    tail = tail->next;  
                }  
                temp = temp->next;  
            }      
        }  
    }  

int main()
{   int n;
    char name[50];
    printf("enter the total no nodes:");
    scanf("%d",&n);
    createlist(n);
    
    clone();
  // sortList();
   display();

}




//  output

// enter the total no nodes:4
// enter no3
// enter no6
// enter no7
// enter no9


// ===========================
// After clonning
// -->3
// -->6
// -->7
// -->9


// ===========================
// -->3-->6-->7-->9