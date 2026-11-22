#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v1(10, 1);

    v1.erase(v1.begin() + 5);
    v1.insert(v1.begin() + 5, -1);

    for (auto v: v1) cout << v << " ";

    int n = 4;
    vector<vector<int>> v2(n, vector<int>(n, 0));

    return 0;
}