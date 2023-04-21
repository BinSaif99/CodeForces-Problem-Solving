#include<stdio.h>

int main()
{
    int a,b,sum,val;

    scanf("%d %d",&a,&b);

    sum = a-b;
    val = sum%10;
    if(val==9)
    {
         sum = sum-1;
        printf("%d",sum);
    }

    else
        printf("%d", sum+1);

    return 0;

}
