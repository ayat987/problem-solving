#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N =1e5+1;
int dp [N][5]; int n;
vector<int>v;
int clc(int i,int last){
    if(i==n){
        return 0;
    }
    int &ret=dp[i][last+1];
    if(ret!=-1){
        return ret;
    }
    ret=1e9;
    int op1=1e9,op2=1e9;
    if(v[i]!=last){
          op1=clc(i+1,v[i]);
    }
    if(v[i]+1!=last){
    op2=clc(i+1,v[i]+1)+1;
    }
    
    ret=min(op1,op2);
    return ret;
}
int main() {
    ios::sync_with_stdio(false);
cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
	 cin>>n;
	 v.assign(n+1,0);
	 for(int i=0;i<n;i++){
	     cin>>v[i];
	 }
	 for(int i=0;i<=n;i++){
	     for(int j=0;j<5;j++){
	         dp[i][j]=-1;
	     }
	 }
	 cout<<clc(0,-1)<<'\n';
}
}
