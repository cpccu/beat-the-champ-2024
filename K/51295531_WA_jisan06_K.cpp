#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
	int n; std::cin >> n;
	std::vector<int> v(n);
	for (int i = 1; i < n; i++) {
		int x; std::cin >> x;
		v[i] = v[i - 1] + x;
	}
	int a, b; std::cin >> a >> b;
	std::cout << v[a + b - a - 1] << '\n';
  return 0;
}