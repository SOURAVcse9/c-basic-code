#include<stdio.h>
int main()
{
    char ch;
    printf("wnter a charecheter:");
    scanf("%c",&ch);
    switch(ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("this charecter is vowel");
        break;
        default:
        printf("this charecter is consonant");


    }
getch();
}
