#include<stdio.h>

int main()
{
    int n,p,q,count=0;

    scanf("%d\n ",&n);

    for(int i=1; i<=n; i++)
    {
        scanf("%d %d",&p,&q);

        int sum = q-p;

        if(sum>=2)
            count++;
        else
            count;
    }
    printf("%d",count);
    return 0;
}
