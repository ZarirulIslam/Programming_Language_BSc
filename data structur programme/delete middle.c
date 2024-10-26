#include<stdio.h>
#include<malloc.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

node *head,*temp,*newnode,*todelete,*prevnode;

void createnode(int n)
{
    int data,i;
    head=(node*)malloc(sizeof(node));
    if(head==NULL)
    {
        printf("memory not allocated");
        return;
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
            printf("memory not allocated");
            return;
        }

        printf("enter the data of node %d:",i);
        scanf("%d",&data);

        newnode->data=data;
        newnode->next=NULL;
        temp->next=newnode;
        temp=temp->next;
    }
}
void deletemiddle(int position)
{
    int i;
    if(head==NULL)
    {
        printf("list is empty");
        return;
    }
    else
    {
    todelete=head;
    prevnode=head;
    for(i=2;i<=position;i++)
    {
        prevnode=todelete;
        todelete=todelete->next;

        if(todelete==NULL)
            break;
    }
    if(todelete!=NULL)
    {
        if(todelete==head)
            head=head->next;

       prevnode->next=todelete->next;
       todelete->next=NULL;
       free(todelete);
    }
    else
    {
        printf("unable to delete");
    }
    }
}
void displaylist()
{
    if(head==NULL)
    {
        printf("list is empty");
    }

    temp=head;
    while(temp!=NULL)
    {
        printf("DATA=%d\n",temp->data);
        temp=temp->next;
    }
}
int main()
{
    int n,position;
    printf("enter total node:");
    scanf("%d",&n);
    createnode(n);

    printf("\nData in the list:\n");
    displaylist();

    printf("how position delete:");
    scanf("%d",&position);
    deletemiddle(position);

    printf("\nAfter delete Data in the list:\n");
    displaylist();
}
