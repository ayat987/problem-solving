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
arr = [5,2,7,3,4, 6]
       0 1 0 1 1 1
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
// problem idea (Longest Non-Decreasing Subsequence)
ll dp[N][N];
void SIMBA() {
     int n; cin>>n;
    vector<ll>v(n);
    for (int i=0;i<n;i++) {
        cin>>v[i];
    }
    memset(dp,-1,sizeof dp);
    function<ll(ll,ll)>clc =[&](ll i,ll pre) {
        if (i==n) {
            return 0ll;
        }
        ll &ret=dp[i][pre+1];
        if (~ret) {
            return ret;
        }
        ret=0;
        ll choice1=clc(i+1,pre);
        ll choice2=0;
        if (pre==-1||v[i]>=v[pre]) {
            choice2=clc(i+1,i)+1;
        }
        return ret=max(choice1,choice2);
    };
    cout<<clc(0,-1);
}
int main() {
    SIMBA_
    int t_=1; //cin>>t_;
    for (int i_=0;i_<t_;i_++) {
        SIMBA();
    }
}