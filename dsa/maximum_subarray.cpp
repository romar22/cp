#include <bits/stdc++.h>
using namespace std;

int main() {
    //Kadane's Algorithm
    vector<int> numbers = {-1, 2, 4, -3, 5, 2, -5, 2};
    int n = numbers.size();

    int best = 0, sum = 0;
    for(int a = 0; a < n; a++) {
        sum = max(a, sum + a);
        best = max(best, sum);
    }
    cout << best << '\n';

    return 0;
}