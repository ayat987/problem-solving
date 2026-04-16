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
optimization
*/
void SIMBA() {
   int l,size;
    cin>>l>>size;
    vector<ll>cuts(size);
    for (int i=0;i<size;i++) {
        cin>>cuts[i];
    }
    memset(dp,-1,sizeof dp);
    // s and e called inferenced variable -> مبحطوش في البرامتر بتاع ال dp
    function<ll(ll,ll,ll,ll)>clc=[&](ll s,ll e,ll si,ll ei) {
        if (si>ei) {
            return 0ll;
        }
        ll &ret=dp[si][ei];
        if (~ret) {
            return ret;
        }
        ret=1e18;
        for (int i=si;i<=ei;i++) {
            ll c=cuts[i];
            ret=min(ret,clc(s,c,si,i-1)+clc(c,e,i+1,ei)+(e-s));
        }
        return ret;
    };
    cout<<clc(0,l,0,size-1);
}
int main() {
    SIMBA_
    int t=1; //cin>>t;
    while (t--) {
        SIMBA();
    }
}