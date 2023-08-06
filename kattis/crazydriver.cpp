#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

template <typename T>
using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> ii;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<long long> vll;
typedef vector<long double> vld;
typedef vector<pair<int, int>> vii;
typedef vector<vector<int>> vvi;
typedef vector<vector<double>> vvd;
typedef vector<vector<long long>> vvll;
typedef vector<vector<char>> vvc;
typedef vector<vector<string>> vvs;

#define pb push_back
#define pf push_front
#define ar array
#define vt vector
#define umap unordered_map
#define uset unordered_set
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()

#define has_bit(bm, x) ((bm) & (1ULL << (x)))
#define xth_bit(x) (1ULL << (x))
#define turn_on(bm, x) (bm |= (1ULL << (x)))
#define turn_off(bm, x) (bm &= (~(1ULL << (x))))
#define smallest_on(bm) ((bm) & (-(bm)))
#define largest_on(bm) (63 - __builtin_clzll(bm))

#define F_OR(i, a, b, s) for (int i = (a); (s) > 0 ? i < (b) : i > (b); i += (s))
#define F_OR1(e) F_OR(i, 0, e, 1)
#define F_OR2(i, e) F_OR(i, 0, e, 1)
#define F_OR3(i, b, e) F_OR(i, b, e, 1)
#define F_OR4(i, b, e, s) F_OR(i, b, e, s)
#define GET5(a, b, c, d, e, ...) e
#define F_ORC(...) GET5(__VA_ARGS__, F_OR4, F_OR3, F_OR2, F_OR1)
#define FOR(...) F_ORC(__VA_ARGS__)(__VA_ARGS__)
#define EACH(x, a) for (auto& x : a)

template <class A>
void read(vt<A>& v);
template <class A, size_t S>
void read(ar<A, S>& a);
template <class T>
void read(T& x) {
    cin >> x;
}
void read(double& d) {
    string t;
    read(t);
    d = stod(t);
}
void read(long double& d) {
    string t;
    read(t);
    d = stold(t);
}
template <class H, class... T>
void read(H& h, T&... t) {
    read(h);
    read(t...);
}
template <class A>
void read(vt<A>& x) {
    EACH(a, x)
    read(a);
}
template <class A, size_t S>
void read(ar<A, S>& x) {
    EACH(a, x)
    read(a);
}

string to_string(char c) {
    return string(1, c);
}
string to_string(bool b) {
    return b ? "true" : "false";
}
string to_string(const char* s) {
    return string(s);
}
string to_string(string s) {
    return s;
}
string to_string(vt<bool> v) {
    string res;
    FOR(sz(v))
    res += char('0' + v[i]);
    return res;
}
template <size_t S>
string to_string(bitset<S> b) {
    string res;
    FOR(S)
    res += char('0' + b[i]);
    return res;
}
template <class T>
string to_string(T v) {
    bool f = 1;
    string res;
    EACH(x, v) {
        if (!f)
            res += ' ';
        f = 0;
        res += to_string(x);
    }
    return res;
}

template <class A>
void write(A x) {
    cout << to_string(x);
}
template <class H, class... T>
void write(const H& h, const T&... t) {
    write(h);
    write(t...);
}
void print() {
    write("\n");
}
template <class H, class... T>
void print(const H& h, const T&... t) {
    write(h);
    if (sizeof...(t))
        write(' ');
    print(t...);
}

/* Shortcut Cheatsheet:
    sz(x): x.size()
    all(v): v.begin(), v.end()

    EACH(x, a): for (auto& x : a)

    FOR(e): for (int i = 0; i < e; i++)
    FOR(a, e): for (int a = 0; i < e; i++)
    FOR(a, s, e): for (int a = s; i < e; i++)
    FOR(a, s, e, it): for (int a = s; i < e; i += it) || for (int a = s; i > e; i -= it)
        <= : e + 1 || >= : e - 1

    read(T x): cin >> x
    read(vt<T> x): for (auto& a : x) cin >> a

    write(T x...): cout << to_string(x...)
    print(T x...): cout << to_string(x...) << ' ' << '\n'
    print(): cout << '\n'
*/

const int INF = 1e9;

void solve() {
    int n;
    read(n);
    vi toll(n - 1);
    read(toll);
    vi open_time(n);
    read(open_time);

    vi min_cost(n);
    min_cost[0] = INF;
    for (int i = 1; i < n; i++) {
        min_cost[i] = min(min_cost[i - 1], toll[i - 1]);
    }

    int curr_time = 0;
    ll dist = 0;
    for (int i = 1; i < n; i++) {
        dist += toll[i - 1];
        curr_time++;
        if (curr_time < open_time[i]) {
            ll d = open_time[i] - curr_time;
            if (d % 2 != 0) d++;
            curr_time += d;
            dist += d * min_cost[i];
        }
    }

    print(dist);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++) {
        // cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}