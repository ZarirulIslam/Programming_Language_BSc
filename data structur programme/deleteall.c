#include<stdio.h>
#include<malloc.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

node *temp,*head,*newnode,*prevnode,*todelete;

void createnode(int n)
{
    int i,data;
    head=(node*)malloc(sizeof(node));
    if(head==NULL)
    {
        printf("memory not allocate");
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
            printf("memory not allocate");
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

void deleteall()
{
    while(head!=NULL)
    {
        //temp=head;
        head=head->next;
        free(head);
    }

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
       printf("DATA=%d\n",temp->data);
       temp=temp->next;
   }
}

int main()
{
    int n,data,position,choice;
    printf("Enter total node:");
    scanf("%d",&n);
    createnode(n);

    printf("\nData in the list:\n\n");
    displaylist();

    printf("what position you delete data?:");
    scanf("%d",&choice);
    deleteall();

    printf("\nAfter insert Data in the list:\n\n");
    displaylist();
}
