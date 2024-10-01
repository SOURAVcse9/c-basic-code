#include<stdio.h>
int main()
{
    ch='\0';
    for( ; ; )
    {
        ch=getchar();
        if(ch=='A')
            break;

    }
    printf("you typed an A");
}
