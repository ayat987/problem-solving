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
    ll n, s;
    cin >> n >> s;
    auto sum_d = [](ll x){
    
        ll sum = 0;
        while(x>0){
            sum += x % 10;
            x /= 10;
        }
        return sum;
    };
    if(sum_d(n)<=s){
        cout << 0 << '\n';
    }
    else{
        ll p = 1, ans = 0;
        while(sum_d(n)>s){
            ll c = p - (n % p); // (n%1=0) first step
            n += c;
            ans += c;
            p *= 10; 
        }
        cout << ans << '\n';
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