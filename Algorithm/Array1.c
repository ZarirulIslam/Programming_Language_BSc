#include<stdio.h>
int main()
{
int T,i;
char n[101];
scanf("%d",&T);
for(i=1;i<=T;i++){
int count=0;
scanf("%s",&n);
for(int j=0;j<101;j++)
{
if(n[j]=='\0')
{
break;
}
count++;
}
if(n[count-1]%2==0)
{
printf("Even\n");
}
else
{
printf("odd\n");
}
}
}



