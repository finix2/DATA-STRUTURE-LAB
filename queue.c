#include <stdio.h>
#define max 10
int ar[max],f=-1,r=-1;
int over();
int under();
int main(void)
{
    int ch;
    do
    {
        printf("\n ****main manu***");
        printf("\n 1.insert");
        printf("\n 2.delet");
        printf("\n 3.display");
        printf("\n 4.exit \n enter your option:");
        scanf("%d",&ch);
        int i;
        switch(ch)
        {
            case 1:

                   if(over()==0)
                   {
                      if(f==-1 && r==-1)
                       {
                           f=0;
                           r=0;
                       }
                       else
                       {
                           r=r+1;
                       }
                    printf("enter the element:");
                   scanf("%d",&i);

                       ar[r]=i;
                   }
                    break;

            case 2:
                   if(under()==0)
                    {
                        i=ar[f];
                        f=f+1;
                        printf("deleted element is %d",i);
                    }
                    break;

            case 3:
                if(under()==0)
                    {
                        for(i=f;i<r;i++)
                        printf("%d \t",ar[i]);
                    }
             break;

            case 4:
                   printf("exit");

              break;

        }
    }while(ch!=4);
    return 0;
}
int over()
{
    if(r==max-1)
    {
        printf("overflow");
        return 1;
    }
    return 0;
}
int under()
{
    if(f== max-1||r== -1)
    {
        printf("stack is empty");
        return 1;
    }
    return 0;
}

