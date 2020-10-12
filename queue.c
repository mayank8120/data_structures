#include <stdio.h>
//#define max 4

int max;
int que[],front=0,rear=-1;


void enter();
void Delete();
void Display();

int main()
{
    int ch;
    
    printf("scan max size of Queue   : ");
    scanf("%d",&max);
    
    do{
    printf("--------queue--------\n");
    printf("press 1 for entering value \n");
    printf("press 2 for delete \n");
    printf("press 3 for display \n");
    printf("press 4 for exit \n");
    printf("enter your choice : ");
    scanf("%d",&ch);
    
    
    switch(ch){
        case 1:enter();break;
        case 2:Delete();break;
        case 3:Display();break;
        case 4:break;
        
        default:printf("invalid choice \n");
        
    }
    }while(ch!=4);

    return 0;
}

void enter(){
    int n;
    if(rear==(max-1)){
        printf("Queue full \n");
    }
    else{
        printf("enter value : ");
        scanf("%d",&n);
        rear++;
        que[rear]=n;
    }
}

void Delete(){
    int n;

    if(rear<front){
        printf("Queue empty\n");
    }
    else{
        n=que[front];
        printf("deleted element is :  %d \n",n);
        front++;
        
        
    }
}

void Display(){
    int i;
    if(rear<front)
    {
        printf("Queue Underflow\n");
    }
    else
    {
        for (i = front; i <= rear; i++) 
        {
            printf("%d ",que[i]);
        }
    }

}




























