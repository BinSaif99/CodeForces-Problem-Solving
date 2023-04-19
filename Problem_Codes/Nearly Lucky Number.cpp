#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int i,flag=0;

    for(i=0; i<s.size(); i++)
    {
        if(s[i]=='4' || s[i]=='7')
            {
                flag++;
//               cout<<"NO";
//                break;

            }
//cout<<flag;
//        else
//        {
//           cout<<"YES";
//           break;
//        }
    }

    if(flag==s.size())
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
