import <iostream>;

int main() {
	std::cout << "Please input two integers:\n";
	int m, n;
	std::cin >> m >> n;
	if (m == n) {
		std::cout << "The two integers are same.\n";
	}
	else {
		std::cout << "The two integers are different.\n";
	}
}