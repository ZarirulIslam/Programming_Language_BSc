#include<stdio.h>
int main()
{
float c,m,km;
printf("Enter a centimeter:");
scanf("%f",&c);
m=c/100;
km=c/100000;
printf("Meter: %f\n",m);
printf("KiloMeter: %f",km);
return 0;
}
