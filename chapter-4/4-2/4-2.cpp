import <iostream>;
import <format>;

int main() {
	std::cout << "Please input two integers:\n";
	int m, n;
	std::cin >> m >> n;
	if (m > 0 && n > 0) {
		if (m < n) {
			int p = m;
			m = n;
			n = p;
		}
		if (m % n == 0) {
			std::cout << std::format("{} is a multiple of {}.\n", m, n);
		}
		else {
			std::cout << std::format("{} isn't a multiple of {}.\n", m, n);
		}
	}
	else {
		std::cout << "The two integers must be positive.\n";
	}
}