#include<stdio.h>
#include<string.h>
void swap(int*x,int*y)
void main ()
{
int n1,n2;
printf("\n the number before the swap,&n1,&n2");
scanf("%d,%d",&n1,&n2);
printf("\n the number after the swap ,&n1,&n2");
*x=*x^*y;
*y=*y^*x;
*x=*x^*y;
}
