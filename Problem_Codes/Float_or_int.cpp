#include<stdio.h>

int main()
{
    float n;
    scanf("%f",&n);
    int sum = n*10;
    if(sum%10==0)
        printf("int %0.f",n);
    else
    {
        int m = n;
        printf("float %d %.3f",m,n-m);
    }

    return 0;

}
