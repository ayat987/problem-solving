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
    int a, b, c;
    cin >> a >> b >> c;
    if((a!=b)&&(b==c)){
        cout << "Yes";
    }
    else{
        cout << "No";
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
    SIMBA_
    int t=1;// cin>>t;
    while (t--) {
        SIMBA();
    }
    return 0;
}