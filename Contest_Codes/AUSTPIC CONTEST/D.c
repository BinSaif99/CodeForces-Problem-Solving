#include<stdio.h>

int main()
{
    double a,b;
    int n,i;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
       scanf("%lf %lf",&a,&b);
       printf("Case %d: %.2lf\n", i, a+(b/1.8));
    }
    return 0;
}
