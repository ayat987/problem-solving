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
    int n;
    cin >> n;
    vector<ll> v(n);
     map<ll, ll> mp;
    for (int i = 0; i < n;i++){
        cin >> v[i];
        mp[v[i]]++;
    }
    bool exit = 0;
    for(auto i:mp){
      if(i.second>1){
          exit = 1;
          break;
      }
    }
    if(exit){
        cout << -1 << '\n';
    }
    else{
        sort(v.rbegin(), v.rend());
        for (int i = 0; i < n;i++){
            cout << v[i] << " ";
        }
        cout << '\n';
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