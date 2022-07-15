import <iostream>;
import <vector>;

int main() {
	std::cout << "Please enter an upper bound (>1,integer):\n";
	int max;
	std::cin >> max;
	
	std::vector<int> num;
	for (int n = 1; n <= max; n++) {
		num.push_back(n);
	}
	std::cout << "The integers between 1 and " << max << " that are not multiples of 7 or 13 are:\n";
	{
		int p = 0;
		for (int n : num) {
			if (n % 7 != 0 && n % 13 != 0) {
				p++;
				if (p != 10) {
					std::cout << n << ",";
				}
				else {
					std::cout << n << "\n";
					p = 0;
				}
			}
		}
	}
}