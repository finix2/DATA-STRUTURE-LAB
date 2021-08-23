#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node* next;

}node;
void display(node* start);
node* create(int);
int main()
{
    int n;
    node* start=NULL;
    printf("how many node:");
    scanf("%d",&n);
    start=create(n);

    display(start);



    return 0;
}
node* create(int n)
{
    node* s= NULL;
    node* newnode=NULL;
    node* ptr=NULL;
    for(int i=0;i<n;i++)
    {
        newnode=(node*)malloc(sizeof(node));
        printf("enter the data for the node number %d:",i+1);
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(s==NULL)
            s=newnode;
        else
            {
            ptr=s;
        while(ptr->next!=NULL)
        {
           ptr= ptr->next;

        }
        ptr->next=newnode;
            }
    }

    return s;
}
void display (node* start)
{
    node* ptr=start;
    while(ptr!=NULL)
    {

        printf("%d-->",ptr->data);
        ptr=ptr->next;
    }

}
