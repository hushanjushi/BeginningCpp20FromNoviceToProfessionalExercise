import <iostream>;
import <cctype>;
import <format>;

int main() {
	std::cout << "Please input any string as you want.\n";
	
	constexpr int length = 1000;
	char text[length]{};
	std::cin.getline(text, length);

	unsigned n = 0;
	{
		unsigned m = 0;
		do {
			if (!std::isblank(text[m])&&text[m]!='\0') {
				n++;
			}
			m++;
		} while (m < length);
	}
	std::cout << std::format("The number of nonwhitespace characters entered on this line is {}.\n", n);
}