#include<bits/stdc++.h>
using namespace std;


#define endl '\n'
#define optimize                 \
    ios::sync_with_stdio(false); \
    cin.tie(0);


int main()
{
    optimize;
    int m,n,fell=0;
    cin >> m >> n;
    char arr[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> arr[i][j];
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            int flag = false;
            if(arr[i][j]=='O')
            {
                for(int k=i+1;k<m;k++)
                {
                    if(arr[k][j]=='=')
                    {
                        flag = true;

                    }
                }
            }
            if(flag)
            {
                fell++;
            }
        }
    }
    cout << fell;
    return 0;
}

