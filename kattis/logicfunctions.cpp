#include <bits/stdc++.h>

#include <iostream>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<ii> vii;
typedef vector<vector<int>> vvi;
typedef vector<vector<char>> vvc;

#define pb push_back
#define pf push_front

void exclusive(bool x, bool y, bool& ans) {
    ans = x ^ y;
}

void implies(bool x, bool y, bool& ans) {
    ans = !(x && !y);
}

void equivalence(bool x, bool y, bool& ans) {
    ans = x == y;
}

void checkAns(bool val, bool expected) {
    if (val != expected) {
        cout << "FAIL - expected " << expected << endl;
        exit(1);
    }
}
