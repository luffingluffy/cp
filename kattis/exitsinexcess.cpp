#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

int main() {
    int n, m;
	cin >> n >> m;
	vector<int> sets[2];
	
    for (int corridor = 1, u, v; corridor <= m; ++corridor) {
		cin >> u >> v;
		sets[u < v].push_back(corridor);
    }
    
    int size1 = sets[0].size();
    int size2 = sets[1].size();

    int smaller = (size1 < size2) ? 0 : 1;
	
    cout << sets[smaller].size() << endl;
	
    for (int i : sets[smaller]) {
        cout << i << endl;
    }

    return 0;
}