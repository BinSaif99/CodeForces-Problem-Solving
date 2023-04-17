#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0,cnt=0;
    cin>>n;
    while (n)
    {
        sum=sum+(n/100);
        n=n%100;
        sum=sum+(n/20);
        n=n%20;
        sum=sum+(n/10);
        n=n%10;
        sum=sum+(n/5);
        n=n%5;
        sum=sum+(n/1);
        n=n%1;
        sum=sum+n;
        cout<<sum<<endl;

    }

    return 0;
}
