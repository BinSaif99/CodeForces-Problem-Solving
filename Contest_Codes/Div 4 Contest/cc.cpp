#include<bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define endl '\n'
using namespace std;

const int N=200005;

int t,n,a,b,m,ans;
pair<int,int> ar[N];
bool vis[N];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>t;
    while(t--){
        cin>>n;
        ans=1e9;
        memset(vis,0,sizeof(vis));
        for(int i=1;i<=n;++i){
            cin>>m>>a>>b;
            ar[i]=mp(a*2+b,m);
        }
        sort(ar+1,ar+1+n);
        int cnt=0;
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=1;i<=n;++i){
            if(cnt==2) break;
            int p=ar[i].ss;
            if(ar[i].ff==0){
                pq.push(p);
                ++cnt;
            } else {
                if(!vis[ar[i].ff]){
                    vis[ar[i].ff]=1;
                    ++cnt;
                }
            }
        }
        if(cnt==2){
            ans=min(ans,pq.top());
            pq.pop();
            ans+=pq.top();
        }
        if(ans==1e9) ans=-1;
        cout<<ans<<endl;
    }
    return 0;
}
