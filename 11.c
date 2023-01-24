#include<stdio.h>
int main(){
int i, num, sum=0;

scanf("%d",&num);
for(i=1; i!=0;i++)
{
sum = sum+i%10;
num =num/10;
printf("%d" ,sum);
}

return 0;
}