void subsets(vector<int> &v) {
  int n = v.size();
  for (int i = 0; i < (1 << n); ++i) {
    for (int j = 0; j < n; ++j) {
      if (i & (1 << j)) {
        cout << v[j] << " ";
      }
    }
    cout << "\n";
  }
}
