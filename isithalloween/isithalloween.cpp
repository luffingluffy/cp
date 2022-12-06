// ***IsItHalloween.com Solution***
// Difficulty: 1.5
// Time Limit: 1 second, Memory Limit: 1024 MB
// Acceptance: 54%
// CPU Time: 0.00 s
// Author: Johan Sannemo
// Source: HiQ Challenge 2018
// Link: https://open.kattis.com/problems/isithalloween


#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<ii> vii;

#define push_back pb;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    getline(cin, s);

    if (s == "OCT 31" || s == "DEC 25") {
        cout << "yup" << endl;
    } else {
        cout << "nope" << endl;
    }

    return 0;
}
