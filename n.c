#include<stdio.h>
int main()
int a, b, c;
printf("enter number1 =");
scanf("%d",&a);
printf("\nenter number2 =");
scanf("%d",&b);
printf("\nenter number3 =");
scanf("%d",&c);
if(a > b)
{
if(a > c)
{
printf("\n Greatest number = %d \n ,a);
}
else 
{
printf("\n Greatest number = %d \n ,c);

}
} else if (b > c)
{
printf("\n Greatest number = %d \n ,b);
}
else
{
printf("\n Greatest number = %d \n ,c);
}
return 0;
}

