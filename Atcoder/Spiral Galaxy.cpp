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
    int h, w;
    cin >> h >> w;
    vector<vector<char>> grid(h+1, vector<char>(w+1));
    for (int i = 1; i <= h;i++){
        for (int j = 1; j <= w;j++){
            cin >> grid[i][j];
        }
    }
    ll ans = 0;
    for (int h1 = 1; h1 <= h; h1++)
    {
        for (int h2 = h1; h2 <= h; h2++)
        {
            for (int w1 = 1; w1 <= w; w1++)
            {
                for (int w2 = w1; w2 <= w; w2++)
                {
                    bool ok = 1;
                    for (int i = h1; i <= h2; i++)
                    {
                        for (int j = w1; j <= w2; j++)
                        {
                            ll x1 = h1 + h2 - i;
                            ll x2 = w1 + w2 - j;
                            if(x1>=1&&x1<=h&&x2>=1&&x2<=w){
                               if (grid[i][j]!=grid[x1][x2]){
                                   ok = 0;
                                   break;
                               }
                            }
                            
                            
                        }
                        if(!ok){
                            break;
                        }
                    
                    }
                    if(ok){
                            ans++;
                    }
                }
            }
        }
     }
        cout << ans;
}
int main()
{
    SIMBA_
    if (fopen("in.txt", "r"))
    {
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    }
    SIMBA_
    int t=1;// cin>>t;
    while (t--) {
        SIMBA();
    }
    return 0;
}