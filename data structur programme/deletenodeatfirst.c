#include<stdio.h>
#include<malloc.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

node *head,*temp,*newnode,*todelete;

void createnode(int n)
{
   int i,data;
   head=(node*)malloc(sizeof(node));
   if(head==NULL)
   {
       printf("memory not allocated");
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
            printf("memory not allocated");
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
void deletfirst()
{
    todelete=head;
    head=head->next;

    printf("data deleted=%d\n",todelete->data);
    free(todelete);
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
    int n,data,choise;
    printf("enter total node:");
    scanf("%d",&n);
    createnode(n);

    printf("data:\n");
    displaylist();

    printf("enter 1 to choise delete first node:");
    scanf("%d",&choise);
    if(choise==1)
        deletfirst();

    printf("data:\n");
    displaylist();

}



