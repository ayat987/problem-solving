////رَبِّ إِنِّي لِمَا أَنْزَلْتَ إِلَيَّ مِنْ خَيْرٍ فَقِيرٌ
#include<bits/stdc++.h>
#define  ll long long
#define B_ct(n) __builtin_popcountll(n)
#define B_ (n) 31- __builtin_clz(n)
#define SIMBA_  ios_base::sync_with_stdio(0);cin.tie(0), cout.tie(0);
using namespace std;
const ll N=1e4;
ll dp[N][4];
ll red[N];
ll green[N];
ll blue[N];
void SIMBA() {
   int n; cin>>n;
    vector<string>v(n);
    for (int i=0;i<n;i++) {
       cin>>red[i]>>green[i]>>blue[i];
    }
    //G->0 R->1 B->2
    memset(dp,-1,sizeof dp);
    function<ll(ll,ll)>clc=[&](ll i,ll stat){
        if (i==n) {
            return 0ll;
        }
        ll &ret=dp[i][stat];
        // ret=-1
        // make min wrong we will we will make ret = inf to minmize the value
        if (~ret) {
            return ret;
        }
        ret=1e18;
        if (stat!=0){
            ret=min(ret,red[i]+clc(i+1,0));
        }
        if (stat!=1) {
            ret=min(ret,green[i]+clc(i+1,1));
        }
        if (stat!=2) {
            ret=min(ret,blue[i]+clc(i+1,2));
        }
        return ret;
    };
    cout<<clc(0,3);
}
int main() {
    SIMBA_
    int t_=1; //cin>>t_;
   for (int i_=0;i_<t_;i_++) {
       SIMBA();
   }
}