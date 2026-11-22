#include <bits/stdc++.h>
using namespace std;

int main() {
    pair<int, int> p = make_pair(3, 5);
    p.first = 1;
    p.second = 2;

    cout << p.first << " " << p.second << endl;
    vector<pair<int, int>> v;

    v.push_back(make_pair(1, 2));
    v.push_back({5, 5});

    for(auto &x: v) {
        cout << x.first << " " << x.second << endl;
    }

    return 0;
}