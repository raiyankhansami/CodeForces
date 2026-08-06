#include<stdio.h>
int main()
{
    int t,count=0;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if(a+b+c>=2)
            count++;
    }

    printf("%d",count);
    return 0;
}