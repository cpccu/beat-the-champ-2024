#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  int t;
  std::cin >> t;
  std::string original = "Timru";
  while (t--) {
    int n;
    std::string s;
    std::cin >> n >> s;
    if (n != 5) {
      std::cout << "NO" << '\n';
      continue;
    }
    std::sort(s.begin(), s.end());
    if (original == s) {
      std::cout << "YES" << '\n';
    } else {
      std::cout << "NO" << '\n';
    }
  }
  return 0;
}