import <iostream>;

int main() {
	int odd[50]{};
	for (int i = 0; i < 50; i++) {
		odd[i] = 2 * i + 1;
	}
	int* pointer{ odd };
	{
		int m = 0;
		for (int i = 0; i < 50; i++) {
			m++;
			if (m != 10) {
				std::cout << *pointer << ",";
				pointer++;
			}
			else {
				std::cout << *pointer << "\n";
				if (i != 49) {
					pointer++;
				}
				m = 0;
			}
		}
	}
	{
		int m = 0;
		for (int i = 49; i >= 0; i--) {
			m++;
			if (m != 10) {
				std::cout << *pointer << ",";
				pointer--;
			}
			else {
				std::cout << *pointer << "\n";
				if (i != 0) {
					pointer--;
				}
				m = 0;
			}
		}
	}
}