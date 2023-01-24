#include<stdio.h>
void areaofrect(int a, int b);
void areaofcircle(int r);
void areaofsquare(int side);
int main(){
    int a,b,r,side, area1,area2,area3;
printf("enter length and breadth");
scanf("%d"&a);
scanf("%d"&b);

/*printf("enter the value of radius",r);
scanf("%d",r);
printf("length of the side",side);
scanf("%d",side);*/
areaofrect(a,b);
return 0;
}
void areaofrect(int a,int b )
{
return a*b;
printf("area %d",a*b);


}