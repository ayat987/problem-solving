////رَبِّ إِنِّي لِمَا أَنْزَلْتَ إِلَيَّ مِنْ خَيْرٍ فَقِيرٌ
#include<bits/stdc++.h>
#define  ll long long
#define B_ct(n) __builtin_popcountll(n)
#define B_ (n) 31- __builtin_clz(n)
#define SIMBA_  ios_base::sync_with_stdio(0);cin.tie(0), cout.tie(0);
using namespace std;
const ll N=105;
ll dp[N];
/*
 n =2
 5 10
 100 20
solution :((5+10)*10)+(100+10)*20)= 2350
solution : (5+100+10)*20=2300 min
*/
void SIMBA() {
    // push parameter to loop (new trick)
    //  update in memort o(n) not o(n*n)
   int n; cin>>n;
    vector<ll>c(n),q(n);
    for (int i=0;i<n;i++) {
        cin>>c[i]>>q[i];
    }
    memset(dp,-1,sizeof dp);
    function<ll(ll)>clc=[&](ll cur) {
        if (cur==n) {
            return 0ll;
        }
        ll &ret=dp[cur];
        if (~ret) {
            return ret;
        }
        ret=2e18; ll sum=0;
        for (int j =cur; j < n; ++j) {
            sum += c[j];
            ret = min(ret, (sum + 10) * q[j] + clc(j + 1));
        }
        return ret;
    };
    cout<<clc(0);
}
int main() {
    SIMBA_
    int t=1; //cin>>t;
    while (t--) {
        SIMBA();
    }
}