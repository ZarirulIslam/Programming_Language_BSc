#include<stdio.h>
#include<malloc.h>

typedef struct node
{
    int data;
    struct node *next;
}node;
node *head;
void createnode(int n)
{
    node *temp,*newnode;
    int data,i;
    head=(node*)malloc(sizeof(node));
    if(head==NULL)
    {
        printf("memory noty allocated");
        exit(0);
    }

    printf("enter the date of node 1:");
    scanf("%d",&data);

    head->data=data;
    head->next=NULL;

    temp=head;

    for(i=2;i<=n;i++)
    {
        newnode=(node*)malloc(sizeof(node));
        if(newnode==NULL)
            {
                printf("memory not allocated");
                break;
            }
            printf("enter the data of node %d:",i);
            scanf("%d",&data);

            newnode->data=data;
            newnode->next=NULL;

            temp->next=newnode;
            temp=temp->next;
    }
}
void traverse()
{
    node *temp;
    if(head==NULL)
    {
        printf("list is empty");
        return;
    }
    temp=head;
    while(temp!=0)
    {
        printf("data=%d\n",temp->data);
        temp=temp->next;
    }
}
int main()
{
    int n;
    printf("enter total node:");
    scanf("%d",&n);
    createnode(n);
    printf("data list is:\n");
    traverse();
    getch();
    return 0;
}

