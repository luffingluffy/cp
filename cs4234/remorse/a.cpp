#include <bits/stdc++.h>
using namespace std;

int main() {
    string input;
    getline(cin, input);
    vector<int> freq(26);
    int counter = 0;
    int result = 0;

    for (char c : input) {  // converts and counts the frequency of upper-case letters only
        c = toupper(c);
        if (c >= 'A' && c <= 'Z') ++freq[c-'A'], ++counter;
    }

    result += (counter - 1) * 3;    
    sort(freq.rbegin(), freq.rend()); // sort letters by decreasing frequency

    vector<int> morseLength{1, 2, 3, 5, 8, 7};
    int pointer = 0;
    int length = 1;
    
    for (int i = 0; i < 26; ++i) {
        if (freq[i] == 0) break;

        if (morseLength[pointer] == 0) ++pointer, length += 2;
        result += freq[i] * length;
        --morseLength[pointer];
    }
    
    cout << result << endl;
    return 0;
}