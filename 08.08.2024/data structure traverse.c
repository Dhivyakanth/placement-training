#include<stdio.h>  
#include<stdlib.h> 
void traverse();
struct node *head,*p,*old,*n,*s;
struct node   
{  
    int info;  
    struct node *next;   
};
void traverse()
{
    p=head;
    printf("The List is:\n");
    while(p!=NULL)
    {
        printf("%d",p->info);
        p=p->next;
        printf("\n");
    }
}
int main()
{
    int num,i;
    printf("Enter no of nodes:");
    scanf("%d",&num);
    head=(struct node*)malloc(sizeof(struct node));
    printf("Enter header value:");
    scanf("%d",&head->info);
    head->next=NULL;
    old=head;
    for(i=1;i<num;i+=1)
    {
        n=(struct node*)malloc(sizeof(struct node));
        printf("Enter the value of node %d:",i);
        scanf("%d",&n->info);
        n->next=NULL;
        old->next=n;
        old=n;
    }
    traverse();
}

