#include<stdio.h>
#include<malloc.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

node *temp,*head,*newnode,*todelete,*prevnode;

void createnode(int n)
{
    int i,data;

    head=(node*)malloc(sizeof(node));
    if(head==NULL)
    {
        printf("memory not allocate");
        return;
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
            return;
        }

        printf("enter the data at node %d:",i);
        scanf("%d",&data);

        newnode->data=data;
        newnode->next=NULL;

        temp->next=newnode;
        temp=temp->next;
    }
}

void insertend(int data)
{
    int i;
    newnode=(node*)malloc(sizeof(node));

    if(newnode==NULL)
    {
        printf("memory not allocate.");
        return;
    }
    newnode->data=data;
    newnode->next=NULL;

    temp=head;
    while(temp->next!=NULL)
    {
     temp=temp->next;
    }
    temp->next=newnode;

}

void deletemiddle(int position)
{
    int i;
    if(head==NULL)
    {
        printf("empty list");
        return;
    }

    todelete=head;
    prevnode=head;

    for(i=2;i<=position;i++)
    {
        prevnode=todelete;
        todelete=todelete->next;
        if(todelete==NULL)
            break;
    }
    if(todelete==head)
    {
        head=head->next;
    }
    else
    {
       prevnode->next=todelete->next;
       free(todelete);
    }
}
void display()
{
    if(head==NULL)
    {
        printf("list is empty.");
        return;
    }

    temp=head;

    while(temp!=NULL)
    {
        printf("\nDATA=%d",temp->data);
        temp=temp->next;
    }
}

int main()
{
    int n,data,position;

    printf("Enter the total node number:");
    scanf("%d",&n);
    createnode(n);

    printf("\nData in the list:\n\n");
    display();

    printf("\nenter how data you insert?:");
    scanf("%d",&data);
    insertend(data);

    printf("\nAfter insert Data in the list:\n\n");
    display();

    printf("\nenter how position data you delete?:");
    scanf("%d",&position);
    deletemiddle(position);

    printf("\nAfter delete Data in the list:\n\n");
    display();


    getch();
}
