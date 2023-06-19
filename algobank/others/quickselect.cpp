int QuickSelect(int A[], int l, int r, int k) {  // Expected O(n)
    if (l == r) return A[l];
    int q = RandPartition(A, l, r);  // Also O(n)
    if (q + 1 == k)
        return A[q];
    else if (q + 1 > k)
        return QuickSelect(A, l, q - 1, k);
    else
        return QuickSelect(A, q + 1, r, k);
}