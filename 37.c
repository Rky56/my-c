#include<stdio.h>
int fact(int n);
int main(){
int n;
printf("enter the number");
scanf("%d" ,&n);
fact(n);
printf("%d is the fact of %d number\n",fact(n) ,n);
}
int fact(int n){
if(n==0){
    return 1;
}
int factNm1=fact(n-1);
int factN=factNm1*n;
return factN;

}