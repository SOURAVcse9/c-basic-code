//switch keyword: switch,case, break, default
//Write a program that red a digit and display
#include<stdio.h>
int main()
{
    int digit;
    printf("Enter a digit OF ONE CHARECTER:");
    scanf("%d",&digit);
    switch(digit)
    {
    case 0:
        printf("zero\n");
        break;
    case 1:
        printf("one\n");
        break;
    case 2:
        printf("two\n");
        break;
    case 3:
        printf("three\n");
        break;
    case 4:
        printf("four\n");
        break;
    case 5:
        printf("five\n");
        break;
    case 6:
        printf("six\n");
        break;
    case 7:
        printf("seven\n");
        break;
    case 8:
        printf("eight\n");
        break;
    default:
        printf("NOT A VALID DIGITE");
    }
}
