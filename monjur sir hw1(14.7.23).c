
#include<stdio.h>
int main(){
int A,B;
printf("Enter the value of these variables : ");
scanf("%d",&A);
scanf("%d",&B );
int *ptr1 , *ptr2;

ptr1 = &A;
 ptr2 = &B;
int temp = *ptr1;
*ptr1 = *ptr2;
*ptr2 = temp;

printf(" A = %d \n B = %d", A , B);
}
