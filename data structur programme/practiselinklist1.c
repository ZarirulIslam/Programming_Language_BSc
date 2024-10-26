#include<stdio.h>
#include<malloc.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

node *temp,*head,*newnode,*cur,*prev;

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

void reverse()
{
    if(head==NULL)
    {
        printf("empty list");
        return;
    }

    cur=head;
    prev=head;

    cur=head->next;
    head=head->next;
    prev->next=NULL;

    while(head!=NULL)
    {
        head=head->next;
        cur->next=prev;
        prev=cur;
        cur=head;
    }

    head=prev;
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
    int n,num;

    printf("eneter total node:");
    scanf("%d",&n);
    createnode(n);

    printf("\nData in the list:\n\n");
    display();

    reverse();

    printf("\nafter reverse Data in the list:\n\n");
    display();

}
