#include <vector>
using namespace std;

vector<int> primes;

void sieve(int n) {
    // Create a boolean vector to represent prime candidates up to n
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = false;
    is_prime[1] = false;

    // Iterate over the numbers from 2 to n
    for (int i = 2; i <= n; i++) {
        // If the current number is marked as prime, add it to the list of primes
        if (is_prime[i]) {
            primes.push_back(i);
        }

        // Iterate over the already-found primes
        for (auto p : primes) {
            // If the product of the current number and prime exceeds n, stop the inner loop
            if (i * p > n) {
                break;
            }

            // Mark the product of the current number and prime as not prime
            is_prime[i * p] = false;

            // If the current number is divisible by the prime, stop the inner loop
            if (i % p == 0) {
                break;
            }
        }
    }
}
