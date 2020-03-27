#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int stack[MAX],top=-1;
int main()
{
    int opt;
    while(1)
    {
        printf("Tell which operation to perform:\n1.Push 2.Pop 3.Display 4.Exit\n");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    return 0;
}


void push()
    {
        int push;
        if(top>=MAX-1)
        {
            printf("Stack is full");
        }
        else
        {
            printf("enter the number\n");
            scanf("%d",&push);
            top = top+1;
            stack[top]=push;
        }

    }
    void pop(){
        if(top == -1)
            printf("Stack is already empty");
        else{
            top = top -1;
        }
    }
    void display()
    {
        for(int i=0;i<=top;i++)
            printf("%d \n",stack[i]);
    }
