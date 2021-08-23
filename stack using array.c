#include <stdio.h>
#define max 5
int ar[max],top=-1;
int over();
int under();
int main(void)
{
    int ch;
    do
    {
        printf("\n ****main manu***");
        printf("\n 1.push");
        printf("\n 2.pop");
        printf("\n 3.peek");
        printf("\n 4.display");
        printf("\n 5.exit \n enter your option:");
        scanf("%d",&ch);
        int i;
        switch(ch)
        {
            case 1:

                   if(over()==0)
                   {
                       printf("enter the element:");
                   scanf("%d",&i);
                       top=top+1;
                       ar[top]=i;
                   }
                    break;

            case 2:
                   if(under()==0)
                    {
                        i=ar[top];
                        top=top-1;
                        printf("pop element is %d",i);
                    }
                    break;

            case 3:
                    if(under()==0)
                    {
                        printf("top element is %d",ar[top]);
                    }
             break;

            case 4:
                if(under()==0)
                    {
                        for(i=0;i<top;i++)
                        printf("%d \t",ar[i]);
                    }
             break;

            case 5:
                   printf("exit");

              break;

        }
    }while(ch!=5);
    return 0;
}
int over()
{
    if(top==max-1)
    {
        printf("overflow");
        return 1;
    }
    return 0;
}
int under()
{
    if(top==-1)
    {
        printf("stack is empty");
        return 1;
    }
    return 0;
}
