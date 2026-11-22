#include <bits/stdc++.h>
using namespace std;

void basics() {
    // vector
    vector<int> v = {4, 2, 5, 3, 5, 8 ,3};

    sort(v.begin(), v.end());
    sort(v.rbegin(), v.rend()); // reverse

    // array
    int n = 7;
    int a[] = {4, 2, 5, 3, 5, 8, 3};
    sort(a, a+n);

    // string
    string s = "monkey";
    sort(s.begin(), s.end());

    // comparison operator
    vector<pair<int, int>> vp;
    vp.push_back({1, 5}); // sorted by first element primarily
    vp.push_back({5, 3}); // secondarily second element
    vp.push_back({1, 2});
    vp.push_back({1, 2});
    sort(vp.begin(), vp.end());

    for (auto x: vp) {
        cout << "{" << x.first << "," << x.second << "}" << endl;
    }
}

// Stuct
struct Student {
    string name;
    int score;

    // use operator to sort
    bool operator<(const Student& other) {
        return score < other.score;
    }
};

void _struct() {
    vector<Student> students = {
        {"Alice", 90},
        {"Bob", 75},
        {"Charlie", 95}
    };

    // sort(students.begin(), students.end(), [] (auto a, auto b) {
    //     return a.score < b.score;
    // });
    sort(students.begin(), students.end());
    for (Student x: students) cout << x.name << " " << x.score << endl;
}

// lambda
void lambda() {
    vector<pair<int, int>> v = {
        {2, 5},
        {1, 8},
        {2, 3},
        {1, 4}
    };

    sort(v.begin(), v.end(), [](auto a, auto b) {
        cout << a << " " << b << endl;
        return a.second < b.second;
    });
    for (auto x : v) cout << x.first << " - " << x.second << " " << endl;
}


int main() {
    basics();
    lambda();
    _struct();

    return 0;
}