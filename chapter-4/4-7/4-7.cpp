import <iostream>;
import <cctype>;

int main() {
	std::cout << "Please input a character:\n";
	char c;
	std::cin >> c;
	if (std::isalpha(c)) {
		switch (tolower(c)) {
		case 'a':
			[[fallthrough]];
		case 'o':
			[[fallthrough]];
		case 'e':
			[[fallthrough]];
		case 'i':
			[[fallthrough]];
		case 'u':
			std::cout << "The input character is a vowel.\n";
		}
		if (std::islower(c)) {
			std::cout << "The input character is lowercase.\n";
		}
		unsigned p = static_cast <unsigned>(c);
		std::cout << "The lowercase of the character is: " << static_cast<char>(std::tolower(c)) << \
			" and its binary value is:" << ((p & static_cast <unsigned>(0x80)) >> 7) << ((p & static_cast <unsigned>(0x40)) >> 6)\
			<< ((p & static_cast <unsigned>(0x20)) >> 7) << ((p & static_cast <unsigned>(0x10)) >> 4)\
			<< ((p & static_cast <unsigned>(0x8)) >> 3) << ((p & static_cast <unsigned>(0x4)) >> 2)\
			<< ((p & static_cast <unsigned>(0x2)) >> 1) << (p & static_cast <unsigned>(0x1)) << "\n";
	}
	else {
		std::cout << "The input isn't a character.\n";
		return 1;
	}
	return 0;
}