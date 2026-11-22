#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x = 123456789123456789LL;
    long long llmin = LLONG_MIN;
    long long llmax = LLONG_MAX;
    int intmin = INT_MIN;
    int intmax = INT_MAX;

    cout << x << endl;

    // modular arithmetic
    cout << (17 % 5) << endl; // = 2
    // 3 x 5 + 2 = 17

    // print floating point
    double y = 0.3*3+0.1;
    printf("%.20f\n", y);

    // Sum formula
    int n = 5;
    int sum = 0;
    for (int i = 1; i <= 5; i++) {
        sum += pow(i, 2);
    }
    //      (5 * (5 + 1) * (2 * 5 + 1)) / 6
    cout << (n * (n + 1) * (2 * n + 1)) / 6 << endl;

    cout << float(3)/2;
    
    return 0;
}