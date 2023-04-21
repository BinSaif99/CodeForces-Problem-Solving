#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize                 \
    ios::sync_with_stdio(false); \
    cin.tie(0);

deque<int>dq;
multiset<int>Set;
string a,b;

int main()
{
//    optimize;
    int n,q;
    scanf("%d",&q);

    for(int i=1; i<=q; i++)
    {
        cin>>a>>b;

        if(a=="Insert" && b=="Front")
        {
            scanf("%d",&n);
            dq.push_front(n);
            Set.insert(n);
        }
        else if(a=="Insert" && b=="Back")
        {
            scanf("%d",&n);
            dq.push_back(n);
            Set.insert(n);
        }
        else if(a=="Erase" && b=="Front")
        {
            Set.erase(Set.find(dq.front()));
            dq.pop_front();
        }
        else if(a=="Erase" && b=="Back")
        {
            Set.erase(Set.find(dq.back()));
            dq.pop_back();
        }
        else if(a=="Get" && b=="Front") cout << dq.front() <<"\n";
        else if(a=="Get" && b=="Back") cout << dq.back()<<"\n";
        else if(a=="Get" && b=="Max") cout << *Set.rbegin()<<"\n";
        else if(a=="Get" && b=="Min") cout << *Set.begin()<<"\n";
    }
}
