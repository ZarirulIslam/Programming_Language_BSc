#include <stdio.h>

int main() {
 int a,b,c,d;

 float e,f,hello;

scanf("%d%d%f",&a,&b,&e);
scanf("%d%d%f",&c,&d,&f);


 hello=(b*e)+(d*f);

 printf("VALOR A PAGAR: R$ %0.2f\n",hello);
    return 0;
}
