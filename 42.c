#include<stdio.h>
int main()
{
int r , n , temp, sum=0;
printf("enter the number");
scanf("%d",&n);
temp=n;
while(n>0)
{
    r=n%10;
    sum=(sum*10)+r;
n=n/10;

}
if(temp==sum){
printf("palindrome number\n");
}
else{
printf("not palindrome\n");
}
return 0;
}





