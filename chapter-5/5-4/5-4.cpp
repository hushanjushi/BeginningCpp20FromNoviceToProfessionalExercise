import <iostream>;
import <cctype>;
import <format>;

int main() {
	std::cout << "Please input any string as you want.\n";

	constexpr int length = 1000;
	char text[length]{};
	std::cin.getline(text, length);

	int m = 0;
	while (m < length && text[m] != '\0') {
		m++;
	}

	std::cout << std::format("The number of characters the user entered is {}.\n", m);
	std::cout << "The characters the user entered is(inversed ordered):\n";

	for (; m >= 0; m--) {
		std::cout << text[m];
	}
	std::cout << std::endl;
}