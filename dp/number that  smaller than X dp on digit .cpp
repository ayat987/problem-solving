// رَبِّ إِنِّي لِمَا أَنْزَلْتَ إِلَيَّ مِنْ خَيْرٍ فَقِيرٌ
#include <bits/stdc++.h>
#define ll long long
#define B_ct(n) __builtin_popcountll(n)
#define B_ (n)31 - __builtin_clz(n)
#define SIMBA_                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
using namespace std;
const int N=5000;
int dp[N][2];
int n;string s;
int clc(int i,int limit){
      if(i==n){
        return (limit==0)?0:1;
      }
      int end=(limit==1)?9:s[i]-'0';
      int &res=dp[i][limit];
      res=0;
      for(int d=0;d<=end;d++){
          if((limit==0)&&(d==s[i]-'0'))
        res+=clc(i+1,(limit||d<end));
      }
      return res;
}
void SIMBA(){
  cin>>n;
  cin>>s;
  memset(dp,-1,sizeof dp);
  cout<<clc(0,0);
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
    //cin >> t;
    while (t--){
        SIMBA();
    }
    return 0;
}