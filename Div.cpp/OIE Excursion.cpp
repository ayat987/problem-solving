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
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    vector<ll> v;
    for (int i = 0; i < n;i++){
        ll t = 0;
       // t = ((-a[i] - i) % m + m) % m;
        t=(m - a[i] % m) % m;
        v.push_back(t);
    }
    ll cnt = 0;
    bool ok = 0;
    for (int i = 0; i < v.size();i++){
        if(i>0&&v[i]==v[i-1]){
            cnt++;
        }
        else{
            cnt = 1;
        }
        if(cnt>=m){
            cout<<"NO\n";
            ok = 1;
            break;
        }
    }
    if(!ok){
        cout << "YES\n";
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
        SIMBA();
    }
}