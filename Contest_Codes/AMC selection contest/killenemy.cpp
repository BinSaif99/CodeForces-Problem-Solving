#include<bits/stdc++.h>
using namespace std;
#define llint long long int
#define endl '\n'
#define optimize                 \
    ios::sync_with_stdio(false); \
    cin.tie(0);
llint arr[500009];

int main()
{
    optimize;
    llint a,b,c,i,k;
//    long long  arr[100];
    cin >> a;
    while(a--)
    {
        cin >> b >> c;
        for(i=0;i<c;i++)
        {
            cin >> arr[i];
        }
        sort(arr,arr+c);
        reverse(arr,arr+c);
        k=0;
        for(i=0;i<b and i<c;i++)
        {
            k+=arr[i];
        }
        cout << k << "\n";
    }
    return 0;
}
