import <iostream>;
import <cmath>;
import <format>;

int main() {
	std::cout << "Please input the size of array:\n";
	unsigned n;
	std::cin >> n;
	if (n == 0) {
		std::cout << "The size of array needs to be bigger than 0.\n";
		return 1;
	}
	double* arr = new double[n];
	for (int i = 0; i < n; i++) {
		*(arr + i) = 1.0 / (i + 1) / (i + 1);
	}
	double sum{};
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
	std::cout << std::format("The square root of that result is {}.\n", std::sqrt(6.0 * sum)) << std::endl;
	delete[] arr;
}