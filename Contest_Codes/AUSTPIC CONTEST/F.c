#include<stdio.h>
const double PI = acos(-1.0);

int main()
{
    int n,i;
    double a,b,c,red, green;
    while(scanf("%d",&n)==1)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%lf",&a);

            c=a/5;
            b=a*0.6;
            red=PI*pow(c,2);
            green=(a*b)-red;
            printf("%.2lf %.2lf\n",red,green);
        }
    }
    return 0;
}
