import <iostream>;
import <format>;

int main() {
	std::cout << "Please input an integer(>1):\n";
	int n;
	std::cin >> n;
	if (n < 1) {
		std::cout << "The integer must be bigger than 1.\n";
		return 1;
	}
	else {
		for (int m = 1; m <= n; m++) {
			std::cout << std::format("{:>12}\t{:>12}\n", m, m * m);
		}
	}
}