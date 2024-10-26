#include<stdio.h>
#include<malloc.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

node *head,*temp,*newnode;

void createnode(int n)
{
    int i,data;
    head=(node*)malloc(sizeof(node));
    if(head==NULL)
    {
        printf("memory not allocate");
        exit(0);
    }

    printf("enter the data of node 1:");
    scanf("%d",&data);

    head->data=data;
    head->next=NULL;

    temp=head;

    for(i=2;i<=n;i++)
    {
        newnode=(node*)malloc(sizeof(node));
        if(newnode==NULL)
        {
            printf("memory not allocate");
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

void insertend(int data)
{
    newnode=(node*)malloc(sizeof(node));
    if(newnode==NULL)
    {
        printf("memory not allocate");
    }
    else
    {
        newnode->data=data;
        newnode->next=NULL;
        temp=head;

        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
    }
}
void displaylist()
{
    if(head==NULL)
    {
        printf("empty list");
        return;
    }

    temp=head;
    while(temp!=NULL)
    {
        printf("data=%d\n",temp->data);
        temp=temp->next;
    }
}
int main()
{
    int n,data;
    printf("enter total node:");
    scanf("%d",&n);
    createnode(n);

    printf("data in list:\n");
    displaylist();

    printf("insert node at end:");
    scanf("%d",&data);
    insertend(data);
    printf("insert successful");

    printf("after insert now data in list:\n");
    displaylist();

    getch();
}
