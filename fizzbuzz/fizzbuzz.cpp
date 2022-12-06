// ***FizzBuzz Solution***
// Difficulty: 1.4
// Time Limit: 1 second, Memory Limit: 1024 MB
// Acceptance: 54%
// CPU Time: 0.00 s
// Author: Darko Aleksic
// Source: Rocky Mountain Regional Contest (RMRC) 2016
// Link: https://open.kattis.com/problems/fizzbuzz


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

    int x, y, n;
    cin >> x >> y >> n;

    for (int i = 1; i <= n; i++) {
        if (i % x == 0 && i % y == 0) {
            cout << "FizzBuzz" << endl;
        } else if (i % x == 0) {
            cout << "Fizz" << endl;
        } else if (i % y == 0) {
            cout << "Buzz" << endl;
        } else {
            cout << i << endl;
        }
    }

    return 0;
}
