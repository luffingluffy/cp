vector<int> primes;
void sieve(int n) {
    vi isPrime(n + 1, 1);
    for (int i = 2; i <= N; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
        for (auto p : primes) {
            if (i * p > N) {
                break;
            }
            isPrime[i * p] = 0;
            if (i % p == 0) {
                break;
            }
        }
    }
}