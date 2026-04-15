////رَبِّ إِنِّي لِمَا أَنْزَلْتَ إِلَيَّ مِنْ خَيْرٍ فَقِيرٌ
#include<bits/stdc++.h>
#define  ll long long
#define B_ct(n) __builtin_popcountll(n)
#define B_ (n) 31- __builtin_clz(n)
#define SIMBA_  ios_base::sync_with_stdio(0);cin.tie(0), cout.tie(0);
using namespace std;
const ll N=1000;
// sub-sequence dp.
// بيكون عندي مجموعه من الحاجات والحل عباره عن اني اعمل cut ل subsequence
// first idea
/*
Longest Common Subsequence (lcs)
string1="abcstuqgt"
string2="abcdstufaauuoio"
solution = abcstu = 6
sequence take or Leave every element
we can say (0/1)solution
*/
ll dp[N][N];
void SIMBA() {
   string s1,s2;
    cin>>s1>>s2;
    memset(dp,-1,sizeof dp);
    ll n1=s1.size(); ll n2=s2.size();
    function<ll(ll,ll)>clc=[&](ll i,ll j) {
        if (i==n1||j==n2) {
            return 0ll;
        }
        ll &ret=dp[i][j];
        if (~ret) {
            return ret;
        }
        ret=0;
        if (s1[i]==s2[j]) {
            return ret=clc(i+1,j+1)+1;
        }
        ll choice1=clc(i+1,j);
        ll choice2=clc(i,j+1);
        return ret=max(choice1,choice2);
    };
    cout<<clc(0,0);
}
int main() {
    SIMBA_
    int t_=1; //cin>>t_;
    for (int i_=0;i_<t_;i_++) {
        SIMBA();
    }
}