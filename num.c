#include<stdio.h>
int main()
{
int a , b , c;
printf("enter number1 = ,enter number2 = , enter number3 =" );
scanf("%d%d%d", &a , &b , &c);
if(a > b )
{
if(a > c)
{
printf("greatest number = %d \n" ,a);

}
else{ 
printf("greatest number = %d \n" ,c);
}
else if (b > c)
{
printf("greatest number = %d \n" ,b);
}
else
{
printf("greatest number = %d \n" ,c);
}
printf("THAN YOU\n");
return 0;
}