#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

int main() {
    string input;
    getline(cin, input);
    string ans = string(1, input[0]);
    
    for (int i = 1; i < input.length(); i++) {
        input[i] == input[i-1] ? ans = ans : ans += input[i];
    }
    
    cout << ans << endl;

    return 0;
}