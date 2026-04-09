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
    //  rate :1500
    string s;
    cin >> s;
    ll n = s.size();
    map<char, ll> mp;
    for (int i = 0; i < n;i++){
        mp[s[i]]++;
    }
    ll mx1 = 0;
    for(auto i:mp){
        mx1 = max(mx1, i.second);
    }
    ll ans = 1e10;
    for (int i = 0; i < 10;i++){
        for (int j = 0; j < 10;j++){
            ll last = -1;  ll cnt = 0;
            for(auto c:s){
                ll x = c - '0';
                if(x==i||x==j){
                    if(last==-1||last!=x){
                        cnt++;
                        last = x;
                    }
                }
            }
        if(cnt&1){
           cnt--;
        }
        ans = min(ans, (n - cnt));
        }
        
    }
    //cout << ans << '\n';
    cout << min((n - mx1),abs(ans)) << '\n';
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
    cin >> t_;
    for (int i_ = 0; i_ < t_; i_++)
    {
        ma7adesh_hayesma3ak_tool_ma_enta_da3eef();
    }
}