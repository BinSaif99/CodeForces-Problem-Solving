#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,c,boro,choto;

    cin>>a>>b>>c;
    if(a<=b && a<=c)
        choto=a;
    if(b<=a && b<=c)
        choto=b;
    if(c<=b && c<=a)
        choto=c;
    if(a>=b && a>=c)
        boro=a;
    if (b>=a && b>=c)
        boro=b;
    if (c>=a && c>=b)
        boro=c;

    cout<<choto<<" "<<boro;
    return 0;
}
