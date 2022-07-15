import <iostream>;

int main() {
	int odd[50]{};
	for (int i = 0; i < 50; i++) {
		odd[i] = 2 * i + 1;
	}
	{
		int m = 0;
		for (int i = 0; i < 50; i++) {
			m++;
			if (m != 10) {
				std::cout << *(odd + i) << ",";
			}
			else {
				std::cout << *(odd + i) << "\n";
				m = 0;
			}
		}
	}
	{
		int m = 0;
		for (int i = 49; i >=0; i--) {
			m++;
			if (m != 10) {
				std::cout << *(odd + i) << ",";
			}
			else {
				std::cout << *(odd + i) << "\n";
				m = 0;
			}
		}
	}
}