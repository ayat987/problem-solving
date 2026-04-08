// رَبِّ إِنِّي لِمَا أَنْزَلْتَ إِلَيَّ مِنْ خَيْرٍ فَقِيرٌ
#include <bits/stdc++.h>
#define ll long long
#define B_ct(n) __builtin_popcountll(n)
#define B_ (n)31 - __builtin_clz(n)
#define SIMBA_                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
using namespace std;
void ma7adesh_hayesma3ak_tool_ma_enta_da3eef()
{
    // codeforces problem
    //  the name of prolem is the name of the file
    //  rate :1400
    int m, s;
    cin >> m >> s;
    if (s == 0)
    {
        if (m == 1)
        {
            cout << 0 << " " << 0;
        }
        else
        {
            cout << -1 << " " << -1;
        }
        return;
    }
    else
    {
        ll sum = 0;
        vector<ll> v, vv;
        for (int i = 0; i < m; i++)
        {
            if (sum + 9 < s)
            {
                sum += 9;
                v.push_back(9);
            }
            else
            {
                int x = min(9ll, s - sum);
                v.push_back(x);
                sum += x;
            }
        }
        vv = v;
        ll summ = 0;
        for (int i = 0; i < v.size(); i++)
        {
            summ += v[i];
        }
        if (summ != s)
        {
            cout << -1 << " " << -1;
            return;
        }
        vector<ll> mn(m, 0);
        mn[0] = 1;
        ll temp = s;
        temp -= 1;
        for (int i=m - 1; i>=1;i--){
            int x = min(9 - mn[i], temp);
            mn[i] = x;
            temp -= x;
        }
        mn[0] += temp;
        for (int i = 0; i <mn.size();i++){
            cout << mn[i];
        }
        cout << " ";
        for (int i = 0; i < vv.size(); i++)
        {
            cout << vv[i];
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
    // cin >> t_;
    for (int i_ = 0; i_ < t_; i_++)
    {
        ma7adesh_hayesma3ak_tool_ma_enta_da3eef();
    }
}