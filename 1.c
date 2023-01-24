#include<stdio.h>
int main()
{
int a,b,c; // a ,b ,c are the side of triangle
//printf("enter the side  : ");
scanf(" %d%d " ,&a,&b,&c);
//printf("enter the side b : ");
//scanf(" %d " ,&b);
//printf("enter the side c : ");
//scanf("%d " , &c);

if(a==b && b==c)
{
    printf("equilateral\n");

}

else if (a==b || b==c)
{
    printf("isosceles\n");

}
else
printf("scalene\n");








return 0;
}