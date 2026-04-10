// رَبِّ إِنِّي لِمَا أَنْزَلْتَ إِلَيَّ مِنْ خَيْرٍ فَقِيرٌ
#include <bits/stdc++.h>
#define ll long long
#define B_ct(n) __builtin_popcountll(n)
#define B_ (n)31 - __builtin_clz(n)
#define SIMBA_                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
using namespace std;
void ma7adesh_hayesma3ak_tool_ma_enta_da3eef(){
      // codeforces problem
    //  the name of prolem is the name of the file
    //  rate :1400
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i];
    }
    if(n==1&&k==1&&v[0]==1){
        cout << 2;
    }
    else{
    sort(v.begin(), v.end());
    auto can = [&](ll mid)
    {
        ll sum = 0;
        for (int i = (n / 2); i < n;i++){
            if(v[i]<mid){
            sum += (mid - v[i]);
            }
        }
        return sum <= k;
    };
    ll l = 0, r = 1e10, ans = 0;
    while(l<=r){
        ll midd = (l + r) / 2;
        if(can(midd)){
            ans = midd;
            l = midd + 1;
        }
        else{
            r = midd - 1;
        }
    }
    cout << ans << '\n';
}
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
        ma7adesh_hayesma3ak_tool_ma_enta_da3eef();
    }
}