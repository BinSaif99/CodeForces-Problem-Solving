#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize                 \
    ios::sync_with_stdio(false); \
    cin.tie(0);

int main()
{
    optimize;
    double m,n,res=0;
    cin >> m >> n;

    res = 100*sqrt(3)*pow(m,2);

    if(res>=n)
        cout << "Yes";
    else
        cout << "No";

    return 0;

}
