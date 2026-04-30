// رَبِّ إِنِّي لِمَا أَنْزَلْتَ إِلَيَّ مِنْ خَيْرٍ فَقِيرٌ
#include <bits/stdc++.h>
#define ll long long
#define B_ct(n) __builtin_popcountll(n)
#define B_ (n)31 - __builtin_clz(n)
#define SIMBA_                    \
ios_base::sync_with_stdio(0); \
cin.tie(0), cout.tie(0);
using namespace std;
const ll mod = 1e9+7;
string s1, s2;
ll m, D;
ll dp[2005][2][2][2002][2];
ll n1,n2;
ll clc(ll i,ll l,ll h,ll mul,int ok){
    if (i == n1){
        return (mul==0)&&ok;
    }
    int st = (l == 1) ? 0 : s1[i] - '0';
    int end = (h == 1) ? 9 : s2[i] - '0';
    ll &res = dp[i][l][h][mul][ok];
    if (~res)
    {
        return res;
    }
    res=0;
    for(ll d=st;d<=end;d++) {
        int new_ok=ok;
        if((i&1)){
            if (d!=D) {
                new_ok = 0;
            }
        }
        else {
            if (d==D) {
                new_ok = 0;
            }
        }
        res = (res+clc(i + 1, l || d > st, h || d < end,(mul*10+d)%m,new_ok))%mod;
    }
    return res;
}
void SIMBA(){
    cin >> m >> D;
    cin >> s1;
    cin >> s2;
    n1 = s1.size();
    n2 = s2.size();
    memset(dp, -1, sizeof dp);
    while(n1<n2){
        s1 = "0" + s1;
        n1++;
    }
    cout << clc(0,0,0,0,1)<<'\n';

}
int main()
{
    SIMBA_
    if (fopen("in.txt", "r"))
    {
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    }
    int t = 1;
    //cin >> t;
    while (t--){
        SIMBA();
    }
    return 0;
}