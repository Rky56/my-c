#include<stdio.h>
int main()
{
int age ;
printf("enter the " );
scanf("%d", &age);

if(age>18){
printf("%d adult\n" ,age);
}
else if(age > 13 && age < 18)
{
printf("teenager\n" , age); 
}
else
{
printf("child\n");

}
return 0;
}