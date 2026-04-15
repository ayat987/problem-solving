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
 n =2
 5 10
 100 20
solution :((5+10)*10)+(100+10)*20)= 2350
solution : (5+100+10)*20=2300 min
*/
void SIMBA() {
   int n; cin>>n;
    vector<ll>c(n),q(n),prefix(n+1);
    for (int i=0;i<n;i++) {
        cin>>c[i]>>q[i];
    }
    prefix[0]=0;
    for (int i=0;i<n;i++) {
        prefix[i+1]=prefix[i]+c[i];
    }
    auto add=[&](ll i,ll j) {
        return prefix[j + 1] - prefix[i];
    };
    memset(dp,-1,sizeof dp);
    function<ll(ll,ll)>clc=[&](ll cur,ll lst) {
        if (cur==n) {
            return 0ll;
        }
        ll &ret=dp[cur][lst];
        if (~ret) {
            return ret;
        }
        ret=2e18;
        // Enough
        ll sum=add(lst,cur);
        ret=min(ret,clc(cur+1,cur+1)+(10+sum)*q[cur]);
        //complete
        if (cur+1<n) {
            ret=clc(cur+1,lst);
        }
        return ret;
    };
    cout<<clc(0,0);
}
int main() {
    SIMBA_
    int t=1; //cin>>t;
    while (t--) {
        SIMBA();
    }
}