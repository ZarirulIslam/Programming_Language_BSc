#include<stdio.h>
#include<malloc.h>
typedef struct node
{
    int data;
    struct node *next;
}node;
node *head;
void createnode(int n)
{
    node *new,*temp;
    int i,data;
    head=(node*)malloc(sizeof(node));
    if(head==NULL)
    {
        printf("memory not allocated");
        exit(0);
    }
    printf("enter the data of node 1:");
    scanf("%d",&data);
    head->data=data;
    head->next=NULL;

    temp=head;

    for(i=2;i<=n;i++)
    {
        new=(node*)malloc(sizeof(node));
        if(new==NULL)
        {
            printf("memory not allocated");
            break;
        }
        printf("enter the date of node %d:",i);
        scanf("%d",&data);

        new->data=data;
        new->next=NULL;

        temp->next=new;
        temp=temp->next;
    }
}

void traverse()
{
    node *temp;
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
    int n;
    printf("enter total node:");
    scanf("%d",&n);
    createnode(n);
    printf("data in the list:\n");
    traverse();
}
