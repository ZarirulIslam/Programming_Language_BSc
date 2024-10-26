#include<stdio.h>
#define STACK_MAX 0

typedef struct
{
    int top;
    int data[STACK_MAX];
}stack;

void push(stack *s,int item)
{
    if(s->top>STACK_MAX)
    {
        printf("stack is full");
    }
    else
    {
         s->data[s->top]=item;
        s->top++;
    }
}

int pop(stack *s)
{
    int item;
    if(s->top==0)
        printf("stack is empty");
    else
        s->top--;
    item=s->data[s->top];

    return;
}

int main()

{
    stack s;
    int item;

    s.top=0;

    push(&s,1);
    push(&s,2);
    push(&s,3);

    item=pop(&s);
    printf("%d",item);
    item=pop(&s);
    printf("%d",item);
    item=pop(&s);
    printf("%d",item);
}
