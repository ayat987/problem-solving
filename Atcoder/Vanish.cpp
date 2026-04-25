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
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    map<ll, ll> frq,fr;
    for (int i = 0; i < n;i++){
        cin >> v[i];
        frq[v[i]]++;
    }
    priority_queue<pair<ll,ll>>pq;
    for (int i = 0; i < n;i++){
        fr[v[i]]++;
        if(fr[v[i]]==1){
            pq.push({frq[v[i]]*v[i],v[i]});
        }
    }/*
    
    while(!pq.empty()){
        cout << pq.top().first<<" " <<pq.top().second<< '\n';
        pq.pop();
    }
        */
    /*
    4 3
    4 1
    1 5
    1 4

    v[i]=5 4 3 1
    */
    set<ll> re;
    while(k&&!pq.empty()){
        re.insert(pq.top().second);
        k--;
        pq.pop();
    }
    ll sum = 0;
    for (int i = 0; i < n;i++){
        if(!re.count(v[i])){
            sum += v[i];
        }
    }
    cout << sum;
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