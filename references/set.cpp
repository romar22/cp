#include <bits/stdc++.h>
using namespace std;

int main() {
    // always use set
    unordered_set<int> us; // worst case O(n²)
    set<int> s; // O(n log n)
    us.insert(10);
    us.insert(11);

    for (auto it = us.begin(); it != us.end(); it++) {
        cout << *it << " ";
    }

    return 0;
}