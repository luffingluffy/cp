int kadane(vector<int>& arr) {
    int sum = 0, ans = -INT_MAX;
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
        ans = max(ans, sum);
        //  If sum is negative, discard the current contiguous subarray
        if (sum < 0) sum = 0;
    }

    return ans;
}