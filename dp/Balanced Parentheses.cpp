////رَبِّ إِنِّي لِمَا أَنْزَلْتَ إِلَيَّ مِنْ خَيْرٍ فَقِيرٌ
#include<bits/stdc++.h>
#define  ll long long
#define B_ct(n) __builtin_popcountll(n)
#define B_ (n) 31- __builtin_clz(n)
#define SIMBA_  ios_base::sync_with_stdio(0);cin.tie(0), cout.tie(0);
using namespace std;
const ll N=105;
ll dp[N];
/*
catalan number
عدّ كل الطرق الممكنة لترتيب حاجة صح
هل في اختيار نقطة بتقسم المسألة لنصين؟
dp on range + catalan pattern
Cn =∑(i=0)->(n−1) Ci.Cn−1−i
لو عندي n حاجة
، بعد ما أختار أول تقسيمة،
باقي المسألة بيتقسم لنصين مستقلين
جزء شمال = i
جزء يمين = n-1-i
Count how many ways we can form **n pairs of parentheses** in a valid (well-formed) way.
n=3
()()()
(())()
((()))
()(())
(()())
solution=5;
*/
void SIMBA() {
   int n; cin>>n;
    memset(dp,-1,sizeof dp);
    function<ll(ll)>clc=[&](ll x) {
        if (x<=1) {
            return 1ll; // product
        }
        ll &ret=dp[x];
        if (~ret) {
            return ret;
        }
        ll ans=0;
        for (int i=0;i<x;i++) {
            ans+=clc(i)*clc(x-1-i);
        }
        ret=ans;
        return ret;

    };
    cout<<clc(n);
}
int main() {
    SIMBA_
    int t=1; //cin>>t;
    while (t--) {
        SIMBA();
    }
}