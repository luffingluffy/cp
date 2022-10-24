#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

int main() {
    int n, t;
    vector<long> array;
    cin >> n >> t;

    for (int i = 0; i < n; i++) {
        long a;
        cin >> a;
        array.push_back(a);
    }

    if (t == 1) {
        cout << 7 << endl;
    } else if (t == 2) {
        if (array[0] == array[1]) {
            printf("Equal\n");
        } else if (array[0] > array[1]) {
            printf("Bigger\n");
        } else {
            printf("Smaller\n");
        }
    } else if (t == 3) {
        vector<long> temp;
        for (int i = 0; i < 3; i++) {
            temp.push_back(array[i]);
        }
        sort(temp.begin(), temp.end());
        cout << temp[1] << endl;
    } else if (t == 4) {
        cout << accumulate(array.begin(), array.end(), (long) 0) << endl;
    } else if (t == 5) {
        long ans = 0;
        for (int i = 0; i < n; i++) {
            array[i] % 2 == 0 ? ans += array[i] : ans = ans;
        }
        cout << ans << endl;
    } else if (t == 6) {
        string ans = "";
        for (int i = 0; i < n; i++) {
            long a;
            a = array[i] % 26;
            ans += static_cast<char>('a' + a);
        }
        cout << ans << endl;
    } else if (t == 7) {
        long i = array[0];
        array[0] = -1;
        while (true) {
            if (i >= n) {
                cout << "Out" << endl;
                break;
            }
            if (i == n - 1) {
                cout << "Done" << endl;
                break;
            } 
            if (i == -1) {
                cout << "Cyclic" << endl;
                break;
            }
            int temp = i;
            i = array[i];
            array[temp]= -1;
        }
    }

    return 0;
}