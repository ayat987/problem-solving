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
    // صدقني سؤال وجع دماغ 
    ll ct, ch, cu;
    cin >> ct >> ch >> cu;
    ll ans = 0;
    ll mn = 0, mn1 = 0, mn2 = 0, mn3 = 0, mn4 = 0;
    mn1 = min(ct, cu);
    ans += (mn1 * 4);
    ct -= mn1, cu -= mn1;

    mn4 = min(ch, (ct / 2));
    ans += (7 * mn4);
    ch -= mn4, ct -= (2*mn4);
    
    if(ct==1&&ch){
        ans += (5);
        ct--;
        ch--;
    }

    if(ct){
        ans += (2 * ct) + 1;
    }
    ct = 0;
    ans += ((3 * ch) + (3 * cu));
    cout << ans << '\n';
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