import <iostream>;
import <format>;

int main() {
	std::cout << "Please input an integer:\n";
	int n;
	std::cin >> n;
	(n <= 20) ? (std::cout << "The integer is 20 or less.\n") :\
		(n <= 30 ? (std::cout << "The integer is greater than 20 but not greater than 30.\n") :\
			(n <= 100 ? (std::cout << "The integer is greater than 30 but not exceeding 100.\n") :\
				(std::cout << "The integer is greater than 100.\n")));
}