#include<stdio.h>
int main()
{
    int num,i,r , k;
printf("enter the integer");
scanf("%d",&num);
printf("%d is the integer\n",num);
while (num>0)
{
    r=num%10;
    num=num/10;
    k= r%2;
    if(k!=0)
  
   printf("%d is odd digit\n",r);
    
}

    return 0;
}