#include<stdio.h>
int main()
{
    char s[]="cprogramming";
    int len=strlen(s),i,j;
    for(i=1; i<=len; i++)
    {
        for( j=0; j<i; j++)
            printf("%c",s[j]);
        printf("\n");
    }
    for(i=len-1; i>=1; i--)
    {
        for( j=0; j<i; j++)
            printf("%c",s[j]);
        printf("\n");
    }
}
