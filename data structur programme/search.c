#include<stdio.h>
#include<malloc.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

node *temp,*head,*newnode,*prevnode,*curnode;

void createnode(int n)
{
    int data,i;

    head=(node*)malloc(sizeof(node));
    if(head==NULL)
    {
        printf("memory not allocate");
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
            printf("mwmory not allocate");
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

void search(int num)
{
if(head==NULL)
{
    printf("empty list");
    return;
}

while(head!=NULL)
{
    if(head->data==num)
    {
        printf("found");
        return;
    }
    else
    {
        head=head->next;
    }
}
printf("not found");
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

    printf("\n\nDATA in list:\n");
    displaylist();

    printf("enter what data search?:");
    scanf("%d",&num);
    search(num);

}
