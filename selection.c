#include  <stdio.h>

#include <conio.h>


void main()
{
  int n,i,j=0,ar[10],temp,s,p;

  printf("enter the terms=");
  scanf("%d",&n);

  for(i=0;i<n;i++)
  {
      printf("enter the numbers%d=",i+1);
      scanf("%d",&ar[i]);
  }
printf("element in ascending order using selection sort\n");
    for(j;j<n;j++)
    {
        s=ar[j];
        p=j;
        for(i=j+1;i<n;i++)
        {
           if(ar[i]<s)
             {
                s = ar[i];
		    	p = i;
             }
        }
        temp=ar[p];
        ar[p]=ar[j];
        ar[j]=temp;

        printf("%d\n",ar[j]);
    }

  getch();
}

