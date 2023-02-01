// Online C compiler to run simple intrest
#include <stdio.h>
#include<math.h>
int main()
{
    float p,r,t,si;
    printf("enter p(amount):");
    scanf("%f",&p);
    
    printf("enter r:");
    scanf("%f",&r);
    
    printf("enter t:");
    scanf("%f",&t);
    
    si=(p*r*t)/100;
    printf("simple intrest=%f",si);
    return 0;
}