import <iostream>;
import <vector>;
import <format>;
import <cmath>;
import <memory>;
int main() {
	std::cout << "Please input the size of array:\n";
	unsigned n;
	std::cin >> n;
	if (n == 0) {
		std::cout << "The size of array needs to be bigger than 0.\n";
		return 1;
	}
	auto vec{ std::make_unique<std::vector<double>>(n) };
	for (int i = 0; i < n; i++) {
		(*vec)[i] = 1.0 / (i + 1) / (i + 1);
	}
	double sum{};
	for (auto i : *vec) {
		sum += i;
	}
	std::cout << std::format("The square root of that result is {}.\n", std::sqrt(6.0 * sum)) << std::endl;
}