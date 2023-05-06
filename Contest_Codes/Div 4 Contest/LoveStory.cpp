#include<bits/stdc++.h>
using namespace std;

int main()
{
    int testcase,i;
    cin>>testcase;
    while(testcase--)
    {
        string ss;
        cin>>ss;
        int output=0;
        for(i=0;i<10;i++)
        {
            if(ss[i]!= "codeforces"[i%10])
            {
                output++;
            }
        }
        cout<<output<<endl;
    }



    return 0;
}
