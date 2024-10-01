#define LOOP 100
#define ACCURACY 0.0001
#include<stdio.h>
int main()
{
    int n;
    float x,term,sum;
    printf("Input value of x : ");
    scanf("%d",&x);
    sum=0;
    for(term=1,n=1; n<=LOOP; ++n)
    {
        sum+=term;
        if(term<=ACCURACY)
            goto output;
        term*=x;
    }
    printf("\nFINAL VALUE OF N IS NOT SUFFICIENT\n");
    printf("TO ACHIEVE DESIRED ACCURACY\n");
    goto end;
output:
    printf("\nEXIT FROM LOOP\n");
    printf("Sum=%f;No of terms = %d\n",sum,n);
end:
    ;
getch();

}
