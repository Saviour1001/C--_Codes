#include "bits/stdc++.h"
using namespace std;

void solve() {
	
	int n;
	cin >> n;
	
	vector<long long> cds;
	for (int i=0; i<n; i++) {
		string s;
		cin >> s;
		for (int j=0; j<n; j++) {
			if (s[j] == '1') cds.push_back(j);
		}
	}
    
	
	long long answer = 0;
	
	for (int i=0; i<n; i++) {
		long long mn = INT_MAX;
		long long mx = INT_MIN;
        
		for (int j=i; j<n; j++) {
			mn = min(mn, cds[j]);
			mx = max(mx, cds[j]);
			if (mx - mn + 1 == j - i + 1) {
				answer++;
			}
		}
	}
	
	cout << answer << endl;
	
}

int main() {

	int t;
	cin >> t;
	while (t--) solve();

}