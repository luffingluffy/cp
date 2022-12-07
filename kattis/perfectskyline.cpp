#include <bits/stdc++.h>
using namespace std;

int N, S;
unordered_map<int, vector<int>> size2subset;
vector<int> H;
vector<int> B;
deque<int> assn;
bool impossible[16][1<<16];

bool backtrack(int building, int usedBlocks) {
    if (impossible[building][usedBlocks]) return false;

    if (building == S) {
        for (auto subset : assn) {
            cout << __builtin_popcount(subset);
            for (int j = 0; j < N; j++)
                if ((1<<j) & subset)
                    cout << " " << (j+1);
            cout << endl;
        }
        return true;
    }
    int sz = B[building];
    
    for (auto & subset : size2subset[sz]) {
        if (usedBlocks & subset)
            continue;

        assn.push_back(subset);
        if (backtrack(building + 1, usedBlocks | subset))
            return true;
        assn.pop_back();
    }
    
    impossible[building][usedBlocks] = true;
    return false;
}

int main() {
    cin >> N >> S;
    H.resize(N);
    for (int i = 0; i < N; i++)
        cin >> H[i];

    B.resize(S);
    for (int i = 0; i < S; i++)
        cin >> B[i];

    // for each b in B, 
    // choose disjoints subsets of H that sum up to b
    for (int mask = 0; mask < (1<<N); mask++) {
        int s = 0;
        for (int i = 0; i < N; i++) {
            if ((1<<i) & mask)
                s += H[i];
        }
        size2subset[s].push_back(mask);
    }

    if (!backtrack(0, 0))
        cout << -1 << endl;
}
