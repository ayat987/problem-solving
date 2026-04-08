// رَبِّ إِنِّي لِمَا أَنْزَلْتَ إِلَيَّ مِنْ خَيْرٍ فَقِيرٌ
#include <bits/stdc++.h>
#define ll long long
#define B_ct(n) __builtin_popcountll(n)
#define B_ (n)31 - __builtin_clz(n)
#define SIMBA_                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
using namespace std;
void ma7adesh_hayesma3ak_tool_ma_enta_da3eef()
{ 
    // codeforces problem
    // rate 1400
    int n;
    cin >> n;
    vector<pair<ll, ll>> a(n);
    for (int i = 0; i < n;i++){
        int x, y;
        cin >> x >> y;
        a[i].first = x;
        a[i].second = y;
    }
    sort(a.begin(),a.end());
    ll ans = 0;
    for (int i = 0; i < n;i++){
         if(a[i].first<a[i].second){
            if(i==0){
                ans = a[i].first;
            }
            else{
                if(a[i].first>=ans){
                    ans = a[i].first;
                }
                else{
                    ans = a[i].second;
                }
            }
             
         }
         else{
             if(i==0){
                ans = a[i].second;
             }
             else{
                if(a[i].second>=ans){
                    ans = a[i].second;
                }
                else{
                    ans = a[i].first;
                }
             }
         }      
    }
    cout << ans;
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
    // cin >> t_;
    for (int i_ = 0; i_ < t_; i_++)
    {
        ma7adesh_hayesma3ak_tool_ma_enta_da3eef();
    }
}