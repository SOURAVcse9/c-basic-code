#include<stdio.h>
int main()
{
    int count;
    float weight,height;
    count=0;
    printf("Enter weight and height for 10 boys\n");
    for(weight=40.5; weight<=70; weight++)
    {
        height=weight*4;
        printf("%5.1f%50.1f\n",weight,height);
        //scanf("%f %f", &weight, &height);
        if(weight<50&&height>170)
            count=count+1;

    }
    printf("number of boys with weight <50 kg and height>170 cm =%d",count);

}
