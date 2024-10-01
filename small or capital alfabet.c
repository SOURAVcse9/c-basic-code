#include<stdio.h>
int main()
{
    char ch;
    printf("please enter a charecter:");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z')
    {
        printf("It's a small letter");
    }
    else if(ch>='A'&&ch<='Z')
    {
        printf("It's  a capitaL letter");
    }
    else
    {
        printf("It's not a letter");

    }
    getch();


}
