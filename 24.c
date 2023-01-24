#include<stdio.h>
int main()
{
int num1,num2;
printf("enter the first integer");
scanf("%d",&num1);
printf("enter the second integer");
scanf("%d",&num2);

 if(num1>num2){
 printf("%d %d  are in ascending order",num2,num1);
 }
 else
 printf("%d %d are in ascending order ",num1,num2);

    return 0;
}