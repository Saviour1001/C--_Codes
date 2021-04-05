#include<bits/stdc++.h>
using namespace std ;
 
#define int long long int
 
bool isHill(vector<int> &a, int &n, int i){
    if( i >= 1 && i <= n-2 && a[i] > a[i-1] && a[i] > a[i+1] ) return true ;
    return false ;
}
bool isValley(vector<int> &a, int &n, int i){
    if( i >= 1 && i <= n-2 && a[i] < a[i-1] && a[i] < a[i+1] ) return true ;
    return false ;
}
 
int add(vector<int> &a, int &n, int i){
    return isValley(a, n, i) + isValley(a, n, i+1) + isValley(a, n, i-1) + isHill(a, n, i-1) + isHill(a, n, i) + isHill(a, n, i+1) ;
}
 
void TESTCASE(){
    int n ; cin >> n ;
    vector<int> a(n) ;
    for(int i = 0 ; i < n ; i++) cin >> a[i] ;
    vector<int> info(n, 0) ;
    int cnt = 0 ;
    for(int i = 1 ; i < n - 1 ; i++){
        if( isValley(a, n, i) || isHill(a, n, i) ){
            info[i] = 1 ;
            ++cnt ;
        }
    }
    int res = cnt ;
    for(int i = 1 ; i < n - 1 ; i++){
        int tmp = a[i] ;
        a[i] = a[i-1] ; 
        res = min(res, cnt - info[i-1] - info[i] - info[i+1] + add(a, n, i) ) ;
        a[i] = a[i+1] ;
        res = min(res, cnt - info[i-1] - info[i] - info[i+1] + add(a, n, i) ) ;
        a[i] = tmp ;
    }
    cout << res << "\n" ;
    return ;
}
 
 
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int TESTS = 1 ; cin >> TESTS ;
    for(int TEST = 1 ; TEST <= TESTS ; TEST++){
        TESTCASE() ;
    }
    return 0 ;
}