#include <bits/stdc++.h>
using namespace std;

int c[1000010];
int main(){
	int n,m,k,a,an=0;
	cin>>n>>m>>k;
	for(int i=0;i<n;i++){
		cin>>a;
		a=(-a)%k;
		if(a<0)a+=k;
		c[a]++;
	}
	for(int i=0;i<m;i++){
		cin>>a;
		a%=k;
		if(c[a]){
			c[a]--;
			an++;
		}
	}cout<<an<<endl;
}
