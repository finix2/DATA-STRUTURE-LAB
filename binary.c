#include  <stdio.h>

#include <conio.h>


void main()
{
  int n,i,item,b=1,e,p=-1,ar[50],mid;

  printf("enter the array limit=");
  scanf("%d",&n);
  printf("enter the elements");
  for(i;i<n;i++)
  {

      scanf("%d",&ar[i]);
  }
 printf("enter element to be searched");
 scanf("%d",&item);
 e=n;
    while(b<=e)
      {
          mid=(b+e)/2;
      if(ar[mid]==item)
      {
          p=mid;
          printf("%d found at %d place",item,p);
          break;
      }
      else
      {
          if(ar[mid]>item)
          e=mid-1;
          else
            b=mid+1;
      }
        }
        if(p==-1)

    printf("value not found");


  getch();
}

