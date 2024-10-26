#include<stdio.h>
int main()
{
    double num1,num2,value;
    char sign;

    printf("Enter First Number:");
    scanf("%lf",&num1);
    printf("Enter Second Number:");
    scanf("%lf",&num2);

    value=num1+num2;
    sign='+';
    printf("%.2lf %c %.2lf=%.2lf\n",num1,sign,num2,value);

    value=num1-num2;
    sign='-';
    printf("%.2lf %c %.2lf=%.2lf\n",num1,sign,num2,value);

    value=num1*num2;
    sign='*';
    printf("%.2lf %c %.2lf=%.2lf\n",num1,sign,num2,value);

    value=num1/num2;
    sign='/';
    printf("%.2lf %c %.2lf=%.2lf\n",num1,sign,num2,value);

    value=(int)num1%(int)num2;
    sign='%';
    printf("%.2lf %c %.2lf=%.2lf\n",num1,sign,num2,value);
}