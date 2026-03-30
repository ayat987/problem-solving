//رَبِّ إِنِّي لِمَا أَنْزَلْتَ إِلَيَّ مِنْ خَيْرٍ فَقِيرٌ//
#include<bits/stdc++.h>
#define  ll long long 
#define B_ct(n) __builtin_popcountll(n)
#define B_ (n) 31- __builtin_clz(n) // higest 1 
#define SIMBA_  ios_base::sync_with_stdio(0);cin.tie(0), cout.tie(0);
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
const ll mod = 1e9 + 7;
const ll inverse = 500000004;
const ll INF = 1e18;
const ll modd = 676767677;
using namespace std;
//~n        n!=-1
const ll N = 5005;
ll dp[N];
void accepted() {
    int n; cin >> n;
    vector<ll>v(n),vv;
    map<ll, ll>mp;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        mp[v[i]]++;
    }
    int r = 0;
    for (int i = 0; i <1005 ; i++) {
        if (mp[i] == 0)continue;
        if (mp[i] == 1) {
            cout << "No\n";
            r = 1;
            break;
        }
        else {
            if (mp[i] > 2) {
                ll rem = mp[i] - 2;
                mp[i + 1] += rem;
            }
        }
    }
    if (r == 0) {
      cout << "Yes\n";
    }
}
int main() {
    if (fopen("in.txt", "r")) {
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    }
    ////////////////////////////////////////
    SIMBA_
        int tt = 1;
    cin >> tt;
    while (tt--) {
        accepted();
    }
}