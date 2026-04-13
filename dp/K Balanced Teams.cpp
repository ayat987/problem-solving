// رَبِّ إِنِّي لِمَا أَنْزَلْتَ إِلَيَّ مِنْ خَيْرٍ فَقِيرٌ
#include <bits/stdc++.h>
#define ll long long
#define B_ct(n) __builtin_popcountll(n)
#define B_ (n)31 - __builtin_clz(n)
#define SIMBA_                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
using namespace std;
/*
5 2
1 2 15 15 15
*/
int n, k;
vector<ll> a;
const ll N = 5005;
ll dp[N][N];
ll clc(int i,int op){
    if(i==n){ // basecase
        return 0;
    }
    ll &ret = dp[i][op];
    if(~ret){
        return ret;
    }
    // take or leave
    ret = 0;
    ret = clc(i + 1, op); // Leave
    if(op){
        ll x = upper_bound(a.begin(), a.end(),a[i]+5)-a.begin();
        ll sz = x - i;
        ret = max(ret, sz + clc(i + 1, op - 1));
    }
    return ret;
}
void SIMBA(){
    cin >> n >> k;
    memset(dp, -1, sizeof dp);
    a = vector<ll>(n);
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    cout << clc(0, k);
}
int main()
{
    SIMBA_
    if (fopen("in.txt", "r"))
    {
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    }
    int t_ = 1;
    //cin >> t_;
    for (int i_ = 0; i_ < t_; i_++)
    {
        SIMBA();
    }
}