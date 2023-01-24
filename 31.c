#include<stdio.h>
#include<math.h>
struct sp
{
float x,y,z;

}

    float d2sp (struct sp A, struct sp B)

{

float d;
d = sqrt(pow(A.x-B.x,2))+(pow(A.y-B.y,2))+(pow(A.z-B.z,2));
return d;
}

int main()

{
    struct sp p, q;
    float dist;
    printf("enter the first space point");
    scanf("%f%f%f" ,&p.x,&p.y,&p.z);
    printf("enter the scond space point");
    scanf("%f%f%f" ,&q.x,&q.y,&q.z);
    dist = d2sp(p ,q);
    printf("ditance between the two space point = %f \n",dist);
    return 0;
}


