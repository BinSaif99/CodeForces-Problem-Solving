#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    int sum=(n*(n+1))/2;

    cin>>m;
    int temp=0,x;
    for(int i=1; i<=m; i++)
    {
        cin>>x;
        temp+=x;

    }
    int r=sum-temp;
    cout<<r<<endl;

}
