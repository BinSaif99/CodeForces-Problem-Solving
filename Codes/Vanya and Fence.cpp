#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,height,x,cnt=0,temp=0,flag=0;
    cin>>n>>height;

    for(i=0; i<n; i++)
    {
        cin>>x;
        if(height<x)
            cnt+=2;

        if(height>x)
            temp++;

        if (height==x)
            flag++;
    }

    cout<<cnt+temp+flag<<endl;

    return 0;
}
