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
    printf("enter the data at node 1:");
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

        printf("enter the data at node %d:",i);
        scanf("%d",&data);

        newnode->data=data;
        newnode->next=NULL;

        temp->next=newnode;
        temp=temp->next;
    }
}
void insertmiddle(int data,int position)
{
    int i;
    newnode=(node*)malloc(sizeof(node));
    if(newnode==NULL)
    {
        printf("memory not allocate");
        return;
    }
    else
    {
    newnode->data=data;
    newnode->next=NULL;
    temp=head;
    for(i=2;i<=position-1;i++)
    {
        temp=temp->next;
        if(temp==NULL)
            break;

    }
    if(temp!=NULL)
        {
            newnode->next=temp->next;
            temp->next=newnode;
            printf("insert successfully");
        }
        else
        {
            printf("invalid");
        }
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
    int n,data,position;
    printf("enter total node:");
    scanf("%d",&n);
    createnode(n);

    printf("data in list:\n");
    displaylist();

    printf("insert node at middle:");
    scanf("%d",&data);
    printf("\nhow position:");
    scanf("%d",&position);
    insertmiddle(data,position);
    printf("\ninsert successfully");

    printf("after insert now data in list:\n");
    displaylist();
}
