#include<stdio.h>
int main(){
int rev, n;
printf("Enter 4 digit no:");
scanf("%d", &n);
if (n < 1000 || n > 9999){
printf("Entered number is a four digit number");
return 0;
}
rev= (n%10)*1000 + ((n/10)%10)*100 + ((n/100)%10)*10 +(n/1000);
printf("Reverse is %d.", rev);
return 0;
}