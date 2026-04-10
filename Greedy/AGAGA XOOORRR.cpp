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
    int n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i];
    }
    ll total = v[0];
    for (int i = 1; i < n; i++){
        total ^= v[i];
    }
    if(total==0){
        cout << "YES\n";
    }
    else{
        ll x = 0, cnt = 0;
        for (int i = 0; i < n;i++){
            x ^= v[i];
            if(x==total){
                x = 0;
                cnt++;
            }
        }
        if(cnt>=2){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
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
    cin >> t_;
    for (int i_ = 0; i_ < t_; i_++)
    {
        ma7adesh_hayesma3ak_tool_ma_enta_da3eef();
    }
}