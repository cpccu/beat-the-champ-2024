#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
	std::vector<int> v(3);
	for (auto &x : v) {
		std::cin >> x;
	}
	std::sort(v.begin(), v.end());
	if (v[0] == 5 and v[1] == 5 and v[2] == 7) {
		std::cout << "YES" << '\n';
	}
	else {
		std::cout << "NO" << '\n';
	}
  return 0;
}