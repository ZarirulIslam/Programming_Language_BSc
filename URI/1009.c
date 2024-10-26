#include <stdio.h>

int main() {
 char name[100];

 double salary,sales,total;

 scanf("%s",&name);
 scanf("%lf",&salary);
 scanf("%lf",&sales);
 //sresult=(sales*(15/100));

 total=salary+(sales*0.15);

 printf("TOTAL = R$ %0.2lf",total);
    return 0;
}
