// رَبِّ إِنِّي لِمَا أَنْزَلْتَ إِلَيَّ مِنْ خَيْرٍ فَقِيرٌ
#include <bits/stdc++.h>
#define ll long long
#define B_ct(n) __builtin_popcountll(n)
#define B_ (n)31 - __builtin_clz(n)
#define SIMBA_                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
using namespace std;
const ll mod1 = 1000000007;
const ll mod2 = 1000000009;
const ll base = 131;
struct Hash
{
    int n;
    vector<ll> pref1, pref2;
    vector<ll> pow1, pow2;

    Hash(const vector<ll> &a)
    {
        n = a.size();
        pref1.assign(n, 0);
        pref2.assign(n, 0);
        pow1.assign(n + 1, 1);
        pow2.assign(n + 1, 1);

        for (int i = 1; i <= n; i++)
        {
            pow1[i] = pow1[i - 1] * base % mod1;
            pow2[i] = pow2[i - 1] * base % mod2;
        }

        pref1[0] = a[0];
        pref2[0] = a[0];

        for (int i = 1; i < n; i++)
        {
            pref1[i] = (pref1[i - 1] * base + a[i]) % mod1;
            pref2[i] = (pref2[i - 1] * base + a[i]) % mod2;
        }
    }

    pair<ll, ll> get(int l, int r)
    {
        ll x1 = pref1[r];
        if (l > 0)
            x1 = (x1 - pref1[l - 1] * pow1[r - l + 1] % mod1 + mod1) % mod1;

        ll x2 = pref2[r];
        if (l > 0)
            x2 = (x2 - pref2[l - 1] * pow2[r - l + 1] % mod2 + mod2) % mod2;

        return {x1, x2};
    }
};
void SIMBA()
{
    int n;
    cin >> n;
    vector<ll> a(n * 2), rev(n * 2);
    for (int i = 0; i < n * 2; i++)
    {
        cin >> a[i];
    }
    //haha روحت اعرف يعني اي Hash
    rev = a;
    reverse(rev.begin(), rev.end());
    Hash H(a), R(rev);
    auto pal = [&](int l, int r){
        return (H.get(l, r) == R.get(2*n - r - 1, 2*n - l - 1));
    };
}
int main()
{
    SIMBA_
    if (fopen("in.txt", "r"))
    {
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    }
    int t = 1;
    cin >> t;
    while (t--)
    {
        SIMBA();
    }
    return 0;
}