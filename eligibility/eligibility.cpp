// ***Eligibility Solution***
// Difficulty: 1.6
// Time Limit: 2 seconds, Memory Limit: 1024 MB
// Acceptance: 50%
// CPU Time: 0.00 s
// Author: Howard Cheng
// Source: Rocky Mountain Regional Contest (RMRC) 2014
// Link: https://open.kattis.com/problems/eligibility


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

    int n;
    cin >> n;

    while (n--) {
        string name, d1, d2;
        int courses;
        cin >> name >> d1 >> d2 >> courses;

        int y1 = stoi(d1.substr(0, 4));
        int y2 = stoi(d2.substr(0, 4));
        cout << name << " ";
        if (y1 >= 2010 or y2 >= 1991) {
            cout << "eligible" << endl;
        } else if (courses >= 41) {
            cout << "ineligible" << endl;
        } else {
            cout << "coach petitions" << endl;
        }
    }

    return 0;
}
