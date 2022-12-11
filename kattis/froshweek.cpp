#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

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

template <class TIn>
using indexed_set = tree<
    TIn, null_type, less<TIn>,
    rb_tree_tag, tree_order_statistics_node_update>;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;

    ll total = 0;
    indexed_set<ll> s;
    for (ll i = 0; i < n; i++) {
        ll t;
        cin >> t;
        total += (i - s.order_of_key(t));
        s.insert(t);
    }

    cout << total << endl;

    return 0;
}