#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize                 \
    ios::sync_with_stdio(false); \
    cin.tie(0);

vector<int> getRow(int index)
{
    vector<int> rec_rw;


    rec_rw.push_back(1);

    if (index == 0)
    {
        return rec_rw;
    }

    vector<int> prev = getRow(index - 1);

    for(int i = 1; i < prev.size(); i++)
    {
        int curr = prev[i - 1] + prev[i];
        rec_rw.push_back(curr);
    }
    rec_rw.push_back(1);

    return rec_rw;
}


int main()
{
    optimize;
    int n,t ;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> n;
        vector<int> arr = getRow(n);

        for(int i = 0; i < arr.size(); i++)
        {
            if (i == arr.size() - 1)
                cout << arr[i];
            else
                cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
