#pragma once
#include <bits/stdc++.h>
using namespace std;

// Normal types
template<typename T>
void __print(const T& x) {
    cerr << x;
}

// Pair
template<typename A, typename B>
void __print(const pair<A, B>& p) {
    cerr << "{";
    __print(p.first);
    cerr << ", ";
    __print(p.second);
    cerr << "}";
}

// Vector
template<typename T>
void __print(const vector<T>& v) {
    cerr << "[";
    for (int i = 0; i < (int)v.size(); i++) {
        if (i) cerr << ", ";
        __print(v[i]);
    }
    cerr << "]";
}

// Multiple arguments
template<typename... Args>
void dbg(const Args&... args) {
    int i = 0;
    ((cerr << (i++ ? ", " : ""), __print(args)), ...);
    cerr << '\n';
}

#define debug(...) cerr << "[" << #__VA_ARGS__ << "] = ", dbg(__VA_ARGS__)