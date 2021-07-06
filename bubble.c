
#include  <stdio.h>

#include <conio.h>


void main()
{
  int n,i,j=0,ar[50],temp;

  printf("enter the terms=");
  scanf("%d",&n);
  printf("enter the numbers=");
  for(i=0;i<n;i++)
  {

      scanf("%d",&ar[i]);
  }

    for(j=1;j<n;j++)
    {
        for(i=0;i<n-j;i++)
        {
      if(ar[i]>ar[i+1])
      {
          temp=ar[i];
          ar[i]=ar[i+1];
          ar[i+1]=temp;
      }
        }
    }
   printf("element in array in ascending order \n");
   for(i=0;i<n;i++)
    printf("%d\n",ar[i]);
  getch();
}
