
#include <bits/stdc++.h>
using namespace std;

void search() {
    int n = 7;
    int arr[] = {1, 5, 6, 21, 30, 36, 40};

    int a = 0, b = n - 1;
    int x = 36;
    while (a <= b) {
        int k = (a + b) / 2;
        cout << arr[k];

        if (arr[k] == x) {
            break;
        }

        if (arr[k] > x) {
            b = k - 1;
        } else {
            a = k + 1;
        }
    }
}

int n = 7;
vector<int> v = {1, 5, 6, 21, 30, 36, 40};

void _lower_bound() {
    int x = 21;
    auto index = lower_bound(v.begin(), v.end(), x) - v.begin(); // 4
    if(index < n && v[index] == x) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}

void _____() {
    // count how many x appeared in vector
    int x = 30;
    // auto a = lower_bound(v.begin(), v.end(), x);
    // auto b = upper_bound(v.begin(), v.end(), x);
    // cout << b - a;

    // combination upper bound and lower bound
    auto p = equal_range(v.begin(), v.end(), x);
    auto lower = p.first;
    auto upper = p.second;
    // get index
    int l = p.first - v.begin();
    int r = p.second - v.begin();
    // how many times x appears
    cout << upper - lower;
}

int main() {
    _lower_bound();
    _____();

    return 0;
}