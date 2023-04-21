#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize                 \
    ios::sync_with_stdio(false); \
    cin.tie(0);


int main ()
{
    optimize;
    int i,j,n,f1=0,f2=0,l;
    char a[100];
    cin >> a;
    l=strlen(a);
    for (i=0; i<l; i++)
    {
        if (a[i]=='(') f1++;
        else if (a[i]==')')
        {
            f2++;
            if (f1>0)
            {
                f1--;
                f2--;

            }
        }
    }
    if (f1==0 && f2==0)
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}
