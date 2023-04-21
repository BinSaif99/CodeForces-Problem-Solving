#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize                 \
    ios::sync_with_stdio(false); \
    cin.tie(0);


int main()
{
//    optimize;
    string s;
    while(cin>>s)
     {

        int l=0, u=0, d=0;
        int count=0;

        for( int i =0; i<s.size(); i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                u=1;
            }
            else if( s[i]>='a' && s[i]<='z')
                l=1;
            else if( s[i]>='0' && s[i]<='9')
                d=1;

            if( l==1 && u==1 && d==1)
            {
                count++;
                l=0;
                u=0;
                d=0;
            }

        }
        cout<<count<<"\n";
    }
    return 0;
}
