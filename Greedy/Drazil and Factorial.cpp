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
    //  rate :1400
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char,vector<ll>> mp;
    mp['2'] = {2};
    mp['3'] = {3};
    mp['4'] = {3,2,2};
    mp['5'] = {5};
    mp['6'] = {5,3};
    mp['7'] = {7};
    mp['8'] = {7,2,2,2};
    mp['9'] = {7,3,3,2};
    vector<ll> ans;
    for (int i = 0; i < n;i++){
        if(s[i]!='0'){
            for (auto i:mp[s[i]]){
                ans.push_back(i);
            }
        }
    }
    sort(ans.rbegin(), ans.rend());
    for (int i = 0; i < ans.size();i++){
        cout << ans[i];
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