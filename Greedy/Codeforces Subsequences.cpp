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
     // codeforces problem
    //  the name of prolem is the name of the file
    //  rate :1500
    ll k;
    cin >> k;
    priority_queue<int, vector<int>, greater<int>> pq;
    ll product = 1;
    for (int i = 1; i <= 10;i++){
        pq.push(1);
    }
    while (product < k){
        ll x = pq.top();
        pq.pop();
        x++;
        pq.push(x);
        auto c = pq;
        product = 1;
        while(!c.empty()){
            product *= c.top();
            c.pop();
        }
    }
    ll i = pq.size();
    vector<ll> ans(i);
    ll j = 0;
    while(!pq.empty()){
        ans[j] = pq.top();
        pq.pop();
        j++;
    }
    map<ll, ll> mp;
    string s = "codeforces";
    for (int o = 0,e=0; o < i;o++,e++){
        mp[e] = ans[o];
    }
    for (int u = 0; u < 10;u++){
        for (int v = 0; v < mp[u];v++){
            cout << s[u];
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
    //cin >> t_;
    for (int i_ = 0; i_ < t_; i_++)
    {
        SIMBA();
    }
} 