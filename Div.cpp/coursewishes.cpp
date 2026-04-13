// رَبِّ إِنِّي لِمَا أَنْزَلْتَ إِلَيَّ مِنْ خَيْرٍ فَقِيرٌ
#include <bits/stdc++.h>
#define ll long long
#define B_ct(n) __builtin_popcountll(n)
#define B_ (n)31 - __builtin_clz(n)
#define SIMBA_                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
using namespace std;
void SIMBA(){
    ll n, k;
    cin >> n >> k;
    vector<ll> a(k), b(n);
    vector<pair<ll, ll>> p;
    for (int i = 0; i < k;i++){
        cin >> a[i];
    }
    map<ll, ll> mp;
    for (int i = 0; i < n; i++){
        cin >> b[i];
        if(b[i]!=(k+1)){
         p.push_back({b[i], i + 1});
         mp[b[i]]=(k+1)-b[i];
        }
    }
    sort(p.rbegin(),p.rend());
    vector<ll> ans;
    for(auto i:p){
        for(int j = 0; j < mp[i.first]; j++){
            ans.push_back(i.second);
        }
       
    }
    cout << ans.size() << '\n';
    for (int i = 0; i < ans.size();i++){
        cout << ans[i] << " ";
    }
        cout << '\n';
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
        SIMBA();
    }
}