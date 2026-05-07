// رَبِّ إِنِّي لِمَا أَنْزَلْتَ إِلَيَّ مِنْ خَيْرٍ فَقِيرٌ
#include <bits/stdc++.h>
#define ll long long
#define B_ct(n) __builtin_popcountll(n)
#define B_ (n)31 - __builtin_clz(n)
#define SIMBA_  ios_base::sync_with_stdio(0);cin.tie(0), cout.tie(0);
using namespace std;
const int N =1e5+1;
int dp [N][4]; int n;
vector<int>v;
void SIMBA() {
        cin>>n;
        v.assign(n+1,0);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        //memset(dp,0,sizeof dp );
       for (int i=0;i<=3;i++) {
           dp[n][i]=0;
       }
    for(int i = n-1; i >= 0; i--) {
        for(int last = 0; last <= 3; last++) {
            dp[i][last] = 1e9;

            for(int add = 0; add <= 2; add++) {
                int k = v[i] + add;
                if(k < 3 && k != last) {
                    dp[i][last] = min(dp[i][last],dp[i+1][k] + (add));
                }
            }
        }
    }
        cout<<dp[0][3]<<'\n';
}
int main()
{
    SIMBA_
    int t = 1;
    cin >> t;
    while (t--){
        SIMBA();
    }
    return 0;
}