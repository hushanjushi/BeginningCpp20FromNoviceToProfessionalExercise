import <iostream>;
import <format>;

int main() {
	std::cout << "Please input a number between 1 and 100:\n";
	double x;
	std::cin >> x;
	if (x >= 1 && x <= 100) {
		if (x > 50) {
			std::cout << "The number is bigger than 50.\n";
		}
		else if (x == 50) {
			std::cout << "The number is equal to 50.\n";
		}
		else {
			std::cout << "The number is smaller than 50.\n";
		}
	}
	else {
		std::cout << "The number must be between 1 and 100.\n";
	}
}