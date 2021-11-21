#include <stdio.h>

void Enqueue()
{
    int front=-1, rear=-1, max, queue[5];
 
    while(rear<4){
        if(front==-1 && rear==-1){
            front++;
            rear++;
            printf("\nEnter the number : ");
            scanf("%d", &queue[rear]);
        }
        else{
            rear++;
            printf("\nEnter the number : ");
            scanf("%d", &queue[rear]);
        }
    }
}
void Dequeue()
{   
    while(front!=(rear+1)){
        printf("\n%d", queue[front]);
        front++;
    }
}
void main(){
    int option;
    char u;
    do{
    printf("enter 1 for Enqueue\nenter 2 for Dequeue\nenter 3 for Push\nenter 4 for pop\nenter 5 Reverse");
    printf("\nenter option\n");
    scanf ("%d",&option);
    
    switch(option)
    {
   case 1: Enqueue();
   break;
   case 2: Dequeue();
   break;
  // case 3: Push();
  // break;
  // case 4: pop();
  // break;
  // case 5: Reverse();
  // break;
   
   default: printf("Enter valid option");
   break;
    }
  //display();
  printf(" do u want to continue? y/n");
  scanf("%s",&u);
 }while(u=='y');
}


