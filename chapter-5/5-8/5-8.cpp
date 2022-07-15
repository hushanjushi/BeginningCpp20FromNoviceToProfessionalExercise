import <iostream>;
import <array>;

int main() {
	constexpr int num = 93;
	std::array<long long, 93> fibonacci;
	fibonacci[0] = 1;
	fibonacci[1] = 1;
	for (int i = 2; i < num; i++) {
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
	}
	for (long long x : fibonacci) {
		std::cout << x << "\n";
	}
}