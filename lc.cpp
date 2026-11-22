#include <bits/stdc++.h>
using namespace std;
#ifndef ONLINE_JUDGE
    #include "debug.h"
#else
    #define debug(x) ((void)0)
#endif

int N = 6;
int INPUT[] = {3,2,3};

class Solution {
public:
    vector<int> f(vector<int>& nums, int target) {
    }
};

int main () {
    Solution sol;
    vector<int> a(size(INPUT), 0);

    for (int i = 0; i < size(INPUT); i++) {
        a[i] = INPUT[i];
    }
    vector<int> answer = sol.f(a, N);

    // debug(answer);
    for (int i = 0; i < answer.size(); i++) {
        cout << answer[i] << " ";
    }

    return 0;
}