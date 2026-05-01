#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> v(n);
    for (auto &x : v) cin >> x;

    //  نعمل copy ونرتب
    vector<long long> comp = v;
    sort(comp.begin(), comp.end());
    comp.erase(unique(comp.begin(), comp.end()), comp.end());

    //  نحول القيم ل indices
    vector<long long> frq(comp.size() + 2, 0);

    for (auto &x : v) {
        x = lower_bound(comp.begin(), comp.end(), x) - comp.begin() + 1;
        frq[x]++;
    }

    //  suffix sum
    for (int i = comp.size(); i >= 1; i--) {
        frq[i] += frq[i + 1];
    }

    //  frq[i] = عدد العناصر ≥ القيمة i (بعد compression)
    for (int i = 1; i <= comp.size(); i++) {
        cout << frq[i] << "\n";
    }

    return 0;
}