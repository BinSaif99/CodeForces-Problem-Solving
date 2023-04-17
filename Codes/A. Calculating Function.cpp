#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;


   cin>>n;

    if(n%2==0)
    {
        cout<<("%lld", (n/2));
    }

    else
    {
        cout<<("%lld",(-(n+1)/2));
    }

    return 0;
}

