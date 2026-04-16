////رَبِّ إِنِّي لِمَا أَنْزَلْتَ إِلَيَّ مِنْ خَيْرٍ فَقِيرٌ
#include<bits/stdc++.h>
#define  ll long long
#define B_ct(n) __builtin_popcountll(n)
#define B_ (n) 31- __builtin_clz(n)
#define SIMBA_  ios_base::sync_with_stdio(0);cin.tie(0), cout.tie(0);
using namespace std;
const ll N=105;
ll dp[N][N];
/*
palindrome string
general range
start i end j
*/
void SIMBA() {
   int n; cin>>n;
    string s; cin>>s;
    memset(dp,-1,sizeof dp);
    function<ll(ll,ll)>clc=[&](ll i,ll j) {
        if (i>=j) {
            return 0ll;
        }
        ll &ret=dp[i][j];
        if (~ret) {
            return ret;
        }
        ret=1e18;
        ret=clc(i+1,j-1)+(s[i]!=s[j]);
        ret=min(ret,clc(i+1,j)+1);
        ret=min(ret,clc(i,j-1)+1);
        return ret;
    };
    cout<<clc(0,n-1);
}
int main() {
    SIMBA_
    int t=1; //cin>>t;
    while (t--) {
        SIMBA();
    }
}