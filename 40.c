#include<stdio.h>
void cbr(int*, int*);
void main()
{
int x=10,y=20;
printf("%d%d\n",x,y);
cbr(&x,&y);
printf("%d%d\n",x,y);
}
void cbr(int *a, int*b)
{
*a=*a+3;
*b=*b+5;
printf("%d%d\n",*a,*b);
}