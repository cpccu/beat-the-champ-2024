#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
	std::string s;
	std::cin >> s;
	if (s.find("0000000") != std::string::npos or s.find("1111111") != std::string::npos) {
		std::cout << "YES" << '\n';
	}
	else {
		std::cout << "NO" << '\n';
	}
  return 0;
}