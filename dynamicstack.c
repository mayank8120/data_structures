#include <stdio.h>

int max;
int stack[],top=-1;

void push();
void pop();
void Display();




int main()
{
    int ch;
    printf("scan max size of stack   :   ");
    scanf("%d",&max);
    do{
        printf("--------stack--------\n");
    printf("press 1 for push \n");
    printf("press 2 for pop \n");
    printf("press 3 for delete \n");
    printf("press 4 for exit \n");
    printf("enter your choice : ");
    scanf("%d",&ch);
    
    
    switch(ch){
        case 1:push();break;
        case 2:pop();break;
        case 3:Display();break;
        case 4:break;
        
        default:printf("invalid choice \n");
        
    }
    }while(ch!=4);

    return 0;
}

void push(){
    int n;
    if(top==(max-1)){
        printf("stack Overflow\n");
    }
    else{
        printf("enter value : ");
        scanf("%d",&n);
        top++;
        stack[top]=n;
        
    }
    
}

void pop(){
    int n;

    if(top==-1){
        printf("stack Underflow\n");
    }
    else{
        n=stack[top];
        printf("popped element is :  %d \n",n);
        top--;
        
        
    }
}

void Display(){
    int i;
    if(top==-1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
    for(i=0;i<=top;i++){
        printf("stack item %d : %d \n",i+1,stack[i]);
    }
    }
}

























