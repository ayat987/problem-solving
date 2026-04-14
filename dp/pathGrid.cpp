////رَبِّ إِنِّي لِمَا أَنْزَلْتَ إِلَيَّ مِنْ خَيْرٍ فَقِيرٌ
#include<bits/stdc++.h>
#define  ll long long
#define B_ct(n) __builtin_popcountll(n)
#define B_ (n) 31- __builtin_clz(n)
#define SIMBA_  ios_base::sync_with_stdio(0);cin.tie(0), cout.tie(0);
using namespace std;
void SIMBA() {
    ll n,m;cin>>n>>m;
    vector<vector<ll>>grid(n,vector<ll>(m));
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            cin>>grid[i][j];
        }
    }
    function<ll(ll,ll)> clc=[&](ll i,ll j)
    {
        if (i >= n || j >= m) return (ll)-1e18;
        if (i==n-1&&j==m-1) {
            return grid[i][j];
        }
        ll op1=clc(i+1,j);
        ll op2=clc(i,j+1);
        return (grid[i][j]+max(op1,op2));
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