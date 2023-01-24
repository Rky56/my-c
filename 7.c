#include<stdio.h>
int main()
{
int i,a;
printf("enter the num");
scanf("%d",&a);
for(i=1;i<=a; i++)
{
   
if(i%2==0)
{
continue;

}
printf("%d\n",i);
}

return 0;

}