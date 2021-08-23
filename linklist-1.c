#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node* next;

}node;
int main()
{
    node *start,*second,*third;
    start=(node*)malloc(sizeof(node));
    start->data=10;
    start->next=second;
    second=(node*)malloc(sizeof(node));
    second->data=20;
    second->next=third;
    third=(node*)malloc(sizeof(node));
    third->data=30;
    third->next=NULL;
    printf("%d-->%d-->%d",start->data,second->data,third->data);
    return 0;
}


