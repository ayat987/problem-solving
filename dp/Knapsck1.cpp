////رَبِّ إِنِّي لِمَا أَنْزَلْتَ إِلَيَّ مِنْ خَيْرٍ فَقِيرٌ
#include<bits/stdc++.h>
#define  ll long long
#define B_ct(n) __builtin_popcountll(n)
#define B_ (n) 31- __builtin_clz(n)
#define SIMBA_  ios_base::sync_with_stdio(0);cin.tie(0), cout.tie(0);
using namespace std;
const ll N=1000;
// sub-sequence dp.
// بيكون عندي مجموعه من الحاجات والحل عباره عن اني اعمل cut ل subsequence
// first idea
/*
knapsack problem
total weight =13;
weight =[100,2,6,7]
value =[ 100,30,40,5]
solution 40+30=70
sequence take or Leave every element
we can say (0/1)solution
*/
/*
 trick in this type of problem
 we make clc(0,-1)
 dp[il[pre+1]
 if(pre==-1||v[i]>=v[pre])
 make this important
 */
ll dp[N][N];
void SIMBA() {
   int n,total; cin>>n>>total;
    vector<ll>v(n),wg(n);
    for (int i=0;i<n;i++) {
        cin>>wg[i];
    }
    for (int i=0;i<n;i++) {
        cin>>v[i];
    }
    memset(dp,-1,sizeof dp);
    function<ll(ll,ll)>clc=[&](ll i,ll sum) {
        if (i==n) {
            return 0ll;
        }
        ll &ret=dp[i][sum];
        if (~ret) {
            return ret;
        }
        ret=0;
        ll choice1=clc(i+1,sum);
        ll choice2=0;
        if (sum+wg[i]<=total) {
            choice2=clc(i+1,sum+wg[i])+v[i];
        }
        return ret=max(choice1,choice2);
    };
    cout<<clc(0,0);
}
int main() {
    SIMBA_
    int t_=1; //cin>>t_;
    for (int i_=0;i_<t_;i_++) {
        SIMBA();
    }
}