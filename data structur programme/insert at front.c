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
        printf("memory not allocated");
        exit(0);
    }

    printf("enter data of node 1:");
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

        printf("enter data of node %d:",i);
        scanf("%d",&data);

        newnode->data=data;
        newnode->next=NULL;

        temp->next=newnode;
        temp=temp->next;
    }
}
void insertfront(int data)
{
    newnode=(node*)malloc(sizeof(node));
    if(newnode==NULL)
    {
        printf("memory not allocated");
    }

    newnode->data=data;
    newnode->next=head;

    head=newnode;
}

void displaylist()
{
    if(head==NULL)
    {
        printf("list is empty");
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

    printf("data in the list:\n");
    displaylist();

    printf("enter node at front:");
    scanf("%d",&data);
    insertfront(data);
    printf("insert successful");

    printf("after insert now data in the list:\n");
    displaylist();
}
