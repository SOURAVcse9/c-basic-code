#include<stdio.h>
#include<math.h>
int main()
{
    int i,num;
    printf("enter any number:");
    scanf("%d",&num);
    for(i=1;i<=sqrt(num);i++)
    {
        if(num%i==0)
        {
            printf("%d\t",i);
            printf("%d\t",num/i);
        }
    }
}
