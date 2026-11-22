#include <bits/stdc++.h>
using namespace std;


int main() {
    int n = 100;
    int numbers[n];

    // fill all with 1
    // fill(start, end, value);
    fill(numbers, numbers + n, 1);
    // reverse
    reverse(numbers, numbers + n);
    // sort
    sort(numbers, numbers + n);

    int ncopy[n];
    // copy array
    copy(numbers, numbers + n, ncopy);
    for (size_t k = 0; k < sizeof(numbers) / sizeof(numbers[0]); k++) {
        cout << numbers[k] << " ";
    }

    return 0;
}