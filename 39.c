#include<stdio.h>
void cbv(int,int);
void main()
{
int x=10, y=20;
printf("%d %d\n",x,y);
cbv(x,y);
printf("%d %d\n",x,y);
}
void cbv(int x, int y)
{
x=x+3;
y=y+5;
printf("%d %d\n",x,y);
}