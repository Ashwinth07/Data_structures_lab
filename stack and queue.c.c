#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
}*temp;

void linked_stack()
{
struct node *top,*temp;
int stack,num;
printf("---LINKED STACK---");
printf("\n push operation");
printf("\nEnter the number to create how many node");
scanf("%d",&stack);
for(int i=0;i<stack;i++)
{
temp=(struct node *)malloc(sizeof(struct node));
printf("Enter the number:");
scanf("%d",&num);
temp->data=num;
temp->next=NULL;
temp->next=top;
top=temp;
}
if(top==NULL)
{
printf("list is not created");
}
else
{
temp=top;
printf("\npop operation\n");
while(temp!=NULL)
{
printf("-->%d",temp->data);
temp=temp->next;
}
}
}
void array_stack()
{
int top=-1,max,num;
printf("---ARRAY STACK---");
printf("\npush operation\n");
printf("Enter the max to print how many numbers:");
scanf("%d",&max);
int stack[max];
while(top!=max-1){
if(top==max-1)
{
printf("overfolw as array_stack");
}
else
{
printf("Enter the number:");
scanf("%d",&num);
top++;
stack[top]=num;
}
}
printf("\npop operation\n");
while(top!=-1){
if(top==-1)
{
printf("underfolw as array_stack");
}
else
{
printf("%d",stack[top]);
top--;
}
}


}
void linked_queue()
{
struct node *front,*rear;
    int queue,num;
    printf("---LINKED QUEUE---");
    printf("\nEnqueue operation\n");
    printf("Enter the to number create how many node:");
    scanf("%d",&queue);
    for(int i=0;i<queue;i++){
        temp=(struct node*)malloc(sizeof(struct node));
        printf("enter the number:");
        scanf("%d",&num);
        temp->data=num;
        temp->next=NULL;
        if(temp==NULL)
       printf("memory is not alacated");
   else {  
       if(front==NULL){
     front=temp;
     rear=temp;
   }
   else{
   rear->next=temp;
   rear=temp;
   }  
   }    
    }
   
    printf("\n Dequeue operation\n");
    temp=front;
while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }
}
void array_queue()
{
int front=-1,rear=-1,max;
printf("---ARRAY QUEUE---");
    printf("\nEnqueue operation\n");
int queue[5];
while(rear!=4){
if(front==-1&&rear==-1)
{
front++;
rear++;
printf("Enter the number:");
scanf("%d",&queue[rear]);
}
else
{
rear++;
printf("Enter the number:");
scanf("%d",&queue[rear]);
}
}
printf("Dequeue the list\n");
while(front!=rear+1)
{
printf("%d",queue[front]);
front++;
}

}

int main()
{
int option;
printf("1.Array stack\n2.linked stack");
printf("\n3.Array Queue\n4.linked Queue\n");
printf("\n\nEnter the option");
scanf("%d",&option);
switch(option)
{
case 1:
array_stack();
break;
case 2:
linked_stack();
break;
case 3:
array_queue();
break;
case 4:
linked_queue();
break;
default:
printf("Enter the valid option");
    }
   
}