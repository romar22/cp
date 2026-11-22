#include <bits/stdc++.h>
using namespace std;

int main() {
    // CSES: Sliding Window
    // Subarray Sums I
    int n, x;
    cin >> n >> x;

    int l = 0, r = 0;
    int nums[n], sum = 0, cnt = 0;
    while (r < n) {
        int a;
        cin >> a;
        sum += a;
        nums[r] = a;
        while (sum > x) {
            sum -= nums[l];
            l++;
        }
        if (sum == x) {
            cnt++;
        }
        r++;
    }

    cout << cnt;

    return 0;
}