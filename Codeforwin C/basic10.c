#include<stdio.h>
int main()
{
int d,year,week,day;
printf("Enter a days:");
scanf("%d",&d);
year=d/365;
week=(d-(year*365))/7;
day=(d-((year*365)+(week*7)));
printf("%d year %d week %d Day",year,week,day);
return 0;
}

