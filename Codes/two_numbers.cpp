#include <stdio.h>

int main()
{
    float a,b,sum2;
    int sum;
    scanf("%f %f",&a,&b);
    sum = a/b;
    sum2 = a/b;
    int m = sum2*10;
    printf("floor %0.f / %0.f = %d\n",a,b,sum);
    if(a/b==1)
        printf("ceil %0.f / %0.f = %d\n",a,b,sum);
    else
        printf("ceil %0.f / %0.f = %d\n",a,b,sum+1);
    if((m%10)>=5)
    printf("round %0.f / %0.f = %d\n",a,b,sum+1);
    else
         printf("round %0.f / %0.f = %d\n",a,b,sum);

    return 0;

}
//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//    float a,b,sum;
//    cin>>a>>b;
//    sum = (a/b);
//    long m = sum*10;
//    cout<<fixed<<setprecision(0)<<a/b<<endl;
//    cout<<fixed<<setprecision(0)<<(a/b)+1<<endl;
//    if(m%10>=5)
//        cout<<fixed<<setprecision(0)<<a/b+1<<endl;
//    else
//        cout<<fixed<<setprecision(0)<<a/b<<endl;
//    return 0;
//}
