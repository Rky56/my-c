#include<stdio.h>
int main(){
int num;
float num1;
printf("enter the any ineger");
scanf("%f",&num1);
num=(int)num1;
++num;
if((num-num1)!=1)
{
printf("it is not a integer \n" );
}
else{
printf(" it is a integer \n" );
}
    return 0;
}