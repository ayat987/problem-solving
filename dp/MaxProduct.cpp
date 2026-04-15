////رَبِّ إِنِّي لِمَا أَنْزَلْتَ إِلَيَّ مِنْ خَيْرٍ فَقِيرٌ
#include<bits/stdc++.h>
#define  ll long long
#define B_ct(n) __builtin_popcountll(n)
#define B_ (n) 31- __builtin_clz(n)
#define SIMBA_  ios_base::sync_with_stdio(0);cin.tie(0), cout.tie(0);
using namespace std;
const ll N=1000;
ll dp[N][N];
// problem
// given integer S and integer K make array of K element sum=s and their product is maximal possible
void SIMBA() {
 int s,k;
    cin>>s>>k;
    memset(dp,-1,sizeof dp);
    function<ll(ll,ll)>clc=[&](ll K,ll rem) {
        if (K==0) {
            if (rem==0) {
                return 1ll;
            }
            return 0ll;
        }
        if (rem==0) {
            return 0ll;
        }
        ll &ret=dp[K][rem];
        if (~ret) {
            return ret;
        }
        if (K) {
            ret=0;
           for (int i=1;i<=rem;i++){
               ret=max(ret,clc(K-1,rem-i)*i);
           }
            return ret;
        }
    };
    cout<<clc(k,s);
}
int main() {
    SIMBA_
    int t_=1; //cin>>t_;
   for (int i_=0;i_<t_;i_++) {
       SIMBA();
   }
}