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
nested range technique on dp 
(((1)(2))(3))((((4))(5)(6))
power
1(2)(3)4
2*4=8;
1*4=4
8+4=12
soiution :12
*/
void SIMBA() {
    ll n; cin>>n;
   vector<ll>v(n);
    for (int i=0;i<n;i++) {
        cin>>v[i];
    }
    memset(dp,-1,sizeof dp);
    function<ll(ll,ll)>clc=[&](ll i,ll j) {
        if (j-i+1<=2) {
            return 0ll;
        }
        if (j-i+1==3) {
            return v[i]*v[j];
        }
        ll &ret=dp[i][j];
        if (~ret) {
            return ret;
        }
        ret=0;
        for (int k=i+1;k<j;k++) {
            ret=max(ret,clc(i,k)+clc(k,j)+v[i]*v[j]);
        }
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