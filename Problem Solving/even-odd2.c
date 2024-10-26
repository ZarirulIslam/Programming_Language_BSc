#include<stdio.h>
int main()
{
    int T,i;
    char n[100];
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        scanf("%s",&n);
        int count=0;
        for(int j=0; j<100; j++)
        {
            if(n[j]=='\0')
            {
                break;
            }
            count++;
        }
        if(n[count-1]%2==0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
    }
}



