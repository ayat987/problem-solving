////رَبِّ إِنِّي لِمَا أَنْزَلْتَ إِلَيَّ مِنْ خَيْرٍ فَقِيرٌ
#include<bits/stdc++.h>
#define  ll long long
#define B_ct(n) __builtin_popcountll(n)
#define B_ (n) 31- __builtin_clz(n)
#define SIMBA_  ios_base::sync_with_stdio(0);cin.tie(0), cout.tie(0);
using namespace std;
void ma7adesh_hayesma3ak_tool_ma_enta_da3eef() {
    string s;
    cin >> s;
    int n = s.size();
    vector<ll>ans;
    ll cnt = 0;
    for (char c : s) {
        if (c == 'A') cnt++;
        else {
           if (cnt>0) {
               ans.push_back(cnt);
           }
            cnt = 0;
        }
    }
    if (cnt!=0) {
        ans.push_back(cnt);
    }
    bool exit=0;
    for (int i=0;i<n-1;i++) {
        if (s[i]==s[i+1]&&s[i]=='B') {
            exit=1;
            break;
        }
    }
    if (s[0]=='B'|| s[n-1]=='B') {
        exit=1;
    }
    ll total=0;
   if (!ans.size()) {
       cout<<0<<'\n';
   }
   else {
       sort(ans.begin(),ans.end());
       if (exit) {
           total+=ans[0];
       }
       for (int i=1;i<ans.size();i++) {
           total+=ans[i];
       }
       cout<<total<<'\n';
   }

}
int main() {
    SIMBA_
     if (fopen("in.txt", "r")) {
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    }
    int t_=1; cin>>t_;
   for (int i_=0;i_<t_;i_++) {
       ma7adesh_hayesma3ak_tool_ma_enta_da3eef();
   }
}