import <iostream>;
import <cctype>;
import <format>;

int main() {
	std::cout << "Please input any string as you want.\n";

	constexpr int length = 1000;
	char text[length]{};
	std::cin.getline(text, length);

	int m = 0;
	for (; m < length, text[m] != '\0'; m++);

	std::cout << std::format("The number of characters the user entered is {}.\n", m);
	if (m != 0) {
		char c;
		for (int n = 0; 2 * n < m - 1; n++) {
			c = text[n];
			text[n] = text[m - 1 - n];
			text[m - 1 - n] = c;
		}
	}
	std::cout << "The characters the user entered is(inversed ordered):\n";

	for (int n = 0; n < m; n++) {
		std::cout << text[n];
	}
	std::cout << std::endl;
}