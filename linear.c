#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i,j=0,n,val,pos=-1;
    printf("enter the size of the array:");
    scanf("%d",&n);
    printf("enter the array element:");
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    printf("array element=");
    for(i=0;i<n;++i)
    {
        printf("\t %d",a[i]);
    }
    printf("\n enter the array element to be searched=");
    scanf("%d",&val);
    while(j<n)
    {
        if(a[j]==val)
        {
        pos=j;
        printf("%d fund at %d",val,pos+1);
        }
        j=j+1;
    }
    if(pos==-1)
        printf("element not found");
    getch();
}
