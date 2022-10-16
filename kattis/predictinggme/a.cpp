#include <bits/stdc++.h>
using namespace std;

int main() {
    string input1;
    string input2;
    
    getline(cin, input1);
    getline(cin, input2);

    int noOfDays = stoi(input1);
    if (noOfDays < 1) {
        cout << 0;
        return 0;
    }
    
    vector<int> predictedValues;
    istringstream iss(input2);
    for (int n; iss >> n;) predictedValues.push_back(n);
    
    // day 1 actions
    int profitHaveStockSell = -numeric_limits<int>::max();
    int profitHaveStockWait = -numeric_limits<int>::max();
    int profitNoStockBuy = -predictedValues[0];
    int profitNoStockWait = 0;

    for (int i = 1; i < noOfDays; i++) {
        int action1 = profitHaveStockSell;
        int action2 = profitHaveStockWait;
        int action3 = profitNoStockBuy;
        int action4 = profitNoStockWait;

        profitHaveStockSell = max(action2, action3) + predictedValues[i];
        profitHaveStockWait = max(action2, action3);
        profitNoStockBuy = action4 - predictedValues[i];
        profitNoStockWait = max(action1, action4);
    }

    cout << max(profitNoStockWait, profitHaveStockSell) << endl;

    return 0;
}