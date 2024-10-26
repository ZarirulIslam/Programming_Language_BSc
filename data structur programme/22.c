#include<stdio.h>
#include<malloc.h>
typedef struct list
{
    int data;
    struct list *next;
} list;
void insert(list **head, int data)
{
    list *new=(list*)malloc(sizeof(list));
    new->data=data;
    new->next=NULL;
    if(*head==NULL)
    {
        *head=new;
        return;
    }
    else
    {
        list *p=*head;
        while(p->next!=NULL)
        {
            p=p->next;
        }
        p->next=new;
        return;
    }
}
void insertmiddle(list **head, int num,int index)
{
    int c=0;
    list *temp=(list*)malloc(sizeof(list));
    if(*head==NULL)
    {
        *head=temp;
        return;
    }
    else
    {
    temp->data=num;
    temp->next=NULL;
        list *p=*head;
        while(p->next!=NULL)
        {
            if(c==(index-1))
            {
                temp->next=p->next;
                p->next=temp;
                return;
            }
            else
            {
                p=p->next;
            }
            p->next=temp;
        }

    }

}
void printlist(list *head)
{
    list *temp;
    if(head==NULL)
    {
        printf("List is Empty\n");
        return;
    }
    else
    {
        while(head!=NULL)
        {
            printf("%d  ",head->data);
            head=head->next;
        }
    }
}
int main()
{
    list *head=NULL;
    int data,i,n,index,num,position;
    printf("How many number you want to insert:- ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&data);
        insert(&head,data);
    }
    printf("Inserted list:- \n");
    printlist(head);

    printf("\nhow position:");
    scanf("%d",&index);
    printf("insert node at middle:");
    scanf("%d",&num);
    insertmiddle(&head,num,index);
    printf("\ninsert successfully");

    printf("after insert now data in list:\n");
    printlist(head);
}

