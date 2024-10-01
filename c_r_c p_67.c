//magic number programe #3
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int magic;//magic number
    int guess;//users guess
    magic = 9;//get a random number
    printf("Guess the magic number: ");
    scanf("%d",&guess);
    if(guess==magic)
    {
        printf("**Right**");
        printf(" %d is the magic number\n",magic);

    }
    else
    {
        printf("Wrong, ");
        if(guess>magic)
            printf("too high.\n");//nested list
        else
            printf("too low.\n");
    }
    getch();
}
