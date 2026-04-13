// رَبِّ إِنِّي لِمَا أَنْزَلْتَ إِلَيَّ مِنْ خَيْرٍ فَقِيرٌ
#include <bits/stdc++.h>
#define ll long long
#define B_ct(n) __builtin_popcountll(n)
#define B_ (n)31 - __builtin_clz(n)
#define SIMBA_                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
using namespace std;
const long long MOD = 998244353;
const int MAXN = 200000 + 5;

long long fact[MAXN], invfact[MAXN];

long long modpow(long long a, long long e) {
    long long res = 1;
    while (e) {
        if (e & 1) res = res * a % MOD;
        a = a * a % MOD;
        e >>= 1;
    }
    return res;
}

void init() {
    fact[0] = 1;
    for (int i = 1; i < MAXN; i++) {
        fact[i] = fact[i - 1] * i % MOD;
    }

    invfact[MAXN - 1] = modpow(fact[MAXN - 1], MOD - 2);

    for (int i = MAXN - 2; i >= 0; i--) {
        invfact[i] = invfact[i + 1] * (i + 1) % MOD;
    }
}

long long nCr(int n, int r) {
    if (r < 0 || r > n) return 0;
    return fact[n] * invfact[r] % MOD * invfact[n - r] % MOD;
}
void SIMBA(){
    ll n;
    cin >> n;
    vector<ll> l(n), r(n);
    vector<ll> d(n + 2), d2(n + 2);
    for (int i = 0; i < n;i++){
        cin >> l[i] >> r[i];
        // d[x] -> ينفع في ال a 
        // d[y] -> ينفع في ال B
        d[l[i]] += 1; 
        d[r[i]+1] -= 1;
          // d2[x] -> ينفع في الاتنين 
        // (x>=li&&x<=ri) ->correct in A
        // n-x>=li&&n-x<=ri
        //then x<=li-n  x>=ri-n
        // combile x>=max(n-ri,li) x<=min(ri,n-li)
        ll x = max(n - r[i], l[i]);
        ll y = min(r[i], n - l[i]);
        if(x<=y){
            d2[x] += 1;
            d2[y + 1] -= 1;
        }
    }
    for (int i = 1; i < n;i++){
        d[i] += d[i - 1];
    }
    for (int i = 1; i < n;i++){
         d2[i] += d2[i - 1];
    }
    ll ans = 0;
    for (int x = 1; x < n;x++){
        int y = n - x;
        int a = d[x], b = d[y], c = d2[x];
        a -= c;
        b -= c;
        if((a+b+c)!=n){
            continue;
        }
        if(a>x||b>y){
            continue;
        }
        ans =(ans+ nCr(c, x - a))%MOD;
    }
    cout << ans << '\n';
}
int main()
{
    SIMBA_
    init();
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