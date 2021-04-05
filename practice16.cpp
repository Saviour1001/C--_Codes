#include "bits/stdc++.h"
using namespace std;
#define int long long
void find(){
    int n,k;
    int ss = 0;
	cin>>n>>k;
	int cnt[n+5];
	for(int i=0; i<=n; i++) cin>>cnt[i];
	set<pair<int,int> > s; //cnt, typ
	for(int i=0; i<=n; i++){
		s.insert({cnt[i],i});
		ss += cnt[i];
	}
	assert(ss==n*k);
	
	for(int i=0; i<n; i++){ //iterate thru boxes
		int x = (*s.begin()).first,ty1 = (*s.begin()).second;
		s.erase(s.begin());
		int diff = k-x;
		cout<<ty1<<' '<<x<<' ';
		
		auto it = s.end(); it--;
		int y = (*it).first,ty2=(*it).second;
		cout<<ty2<<' '<<diff<<'\n';
		y -= diff;
		s.erase(it); s.insert({y,ty2});
	}
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        find();
    }
} 