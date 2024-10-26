#include<stdio.h>
#include<malloc.h>

typedef struct node
{
    int data;
    struct node *next;
}node;
node *temp,*head,*newnode;

void createnode(int n)
{
    int i,data;

    head=(node*)malloc(sizeof(node));
    if(head==NULL)
    {
        printf("memory notr allocate.");
        return;
    }

    printf("\nenter the data of node 1:");
    scanf("%d",&data);

    head->data=data;
    head->next=NULL;

    temp=head;

    for(i=2;i<=n;i++)
    {
        newnode=(node*)malloc(sizeof(node));
        if(newnode==NULL)
        {
            printf("memory not allocate.");
            return;
        }

        printf("\nenter the data of node %d:",i);
        scanf("%d",&data);

        newnode->data=data;
        newnode->next=NULL;

        temp->next=newnode;
        temp=temp->next;
    }
}

int countnodes()
{
    int count=0;

    temp=head;

    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
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
        printf("DATA=%d\n",temp->data);
        temp=temp->next;
    }
}

int main()
{
    int n,total;

    printf("enter the total node number:");
    scanf("%d",&n);
    createnode(n);

    printf("\n\ndata in the list:\n\n");
    displaylist();

    total=countnodes();
    printf("\n\ntotal node is:%d",total);

    getch();
}
