vector<int> simple_sieve(int limit) {
  vector<bool> is_prime(limit + 1, true);
  vector<int> primes;
  for (int p = 2; p * p <= limit; ++p) {
    if (is_prime[p] == true) {
      for (int i = p * p; i <= limit; i += p) {
        is_prime[i] = false;
      }
    }
  }
  for (int i = 2; i <= limit; ++i) {
    if (is_prime[i]) {
      primes.push_back(i);
    }
  }
  return primes;
}
