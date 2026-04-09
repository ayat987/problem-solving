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
    int n;
    cin >> n;
    vector<ll>x(n),h(n);
    for (int i = 0; i < n;i++){
        cin >> x[i] >> h[i];
    }
    ll cnt = 1;
    ll last=x[0];
    for (int i = 1; i < n;i++){
        if(x[i]-h[i]>last){
            cnt++;
            last = x[i];
        }
        else if(i==n-1||(i+1<n&&(x[i]+h[i]<x[i+1]))){
            cnt++;
            last = x[i] + h[i];
        }
        else{
            last = x[i];
        }
    }
    cout << cnt << '\n';
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
        ma7adesh_hayesma3ak_tool_ma_enta_da3eef();
    }
}