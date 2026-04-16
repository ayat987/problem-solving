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
nested range technique
cuting sticks problem
0-1-2-3-4-5-6-7-8-9-10
we want to cut from 2,4,7 in any order but we want to min the ans
the answer is the Length of the stick in any cut of them
-> first i try to cut at 2 ans+10;
we find that the first cut always give us the total length but different the second Length
second cut from 4 ans+=8;
thrd ans+=6;
10+4+6=20
10+7+4
*/
void SIMBA() {
    ll n,size; cin>>n>>size;
   vector<ll>cuts(size+1); ll vis[1005];
    memset(vis,0,sizeof vis);
    for (int i=1;i<=size;i++) {
        cin>>cuts[i];
        vis[cuts[i]]=1;
    }
    memset(dp,-1,sizeof dp);
    function<ll(ll,ll)>clc=[&](ll s,ll e) { // 1000000
        if (s==e) {
            return 0ll;
        }
        ll &ret=dp[s][e];
        if (~ret) {
            return ret;
        }
        ret=1e18;
        /*
         12-346
         */
        for (int i=s;i<e;i++) { // 1000
            if (vis[i]==1) {
                ret=min(ret,clc(s,i)+clc(i+1,e)+(e-s+1));
            }
        }
        if (ret == 1e18) ret = 0;
        return ret;
    };
    cout<<clc(1,n);
}
int main() {
    SIMBA_
    int t=1; //cin>>t;
    while (t--) {
        SIMBA();
    }
}