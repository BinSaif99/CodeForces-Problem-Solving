#include <iostream>
using namespace std;


#define endl '\n'
#define optimize                 \
    ios::sync_with_stdio(false); \
    cin.tie(0);


int main()
{
    optimize;
    long long n,t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> n;
        int x = 1;
        for (int k = 0; k <= n; k++)
        {
            if(k==n)
            {
                cout << x ;
            }
            else
            {
               cout << x << " ";
            }

            x = x * (n - k) / (k + 1);
        }
        cout << "\n";
    }


    return 0;
}
