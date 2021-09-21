double POW(double x, long long n) {
  double ans = 1.0;
  bool neg = false;
  if (n < 0) {
    neg = true;
    n = (double) - 1 * n;
  }
  while (n) {
    if (n % 2) {
      ans = ans * x;
      n = n - 1;
    }
    else {
      x = (x * x);
      n = n / 2;
    }
  }
  if (neg) {
    return (double)1 / ans;
  }
  return ans;
}
