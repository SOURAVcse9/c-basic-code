#include<stdio.h>
int main()
{
    int i,sum=0,a[11];
   for(i=1;i<=10;i++)
   {


    scanf("%d",&a[i]);
    }
    for(i=1; i<=10; i++)
        {
            if(a[i]>9&&a[i]<100)
            {
                sum=sum+a[i];

            }
             if(sum>999)
                    break;

        }
            printf("\n the total number of sum;%d",sum);



    getch();

}
