#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,b,c,i,j,d,n,s,m;;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        s=0;
        n=0;
        m=0;
        cin>>b;
        for(j=1; j<=b; j++)
        {
            cin>>c>>d;
            s-=d;
            if(j>=2)
            {
                n++;
                if(s==0)
                {
                    m=max(m,n);
                    n=0;
                }
            }
            s+=c;
        }
        cout<<"Case "<<i<<": "<<m<<endl;
    }
}
