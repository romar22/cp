#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<int, int> ump;
    map <char, int> mp;
    mp['a'] = 1;
    mp['b'] = 2;
    mp['c'] = 3;

    for (auto &x: mp) {
        cout << x.first << " " << x.second << endl;
    }

    return 0;
}