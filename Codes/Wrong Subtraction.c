#include<stdio.h>

int main()
{
    int i,n,k,sum=0;
    scanf("%d %d",&k,&n);

    for(i=0;i<n;i++)
    {
        if(k%10==0)
        {
            sum=k/10;
            k=sum;
        }

        else
        {
            sum=k-1;
            k=sum;
        }

    }
    printf("%d",sum);
    return 0;
}
