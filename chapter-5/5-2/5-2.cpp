import <iostream>;
import <format>;
import <vector>;
import <iterator>;
int main() {
	std::vector<double> x;
	int y;
	char c='y';

	while (isalpha(c) && tolower(c) == 'y'){
		std::cout << "Please input an integer:\n";
		std::cin >> y;
		x.push_back(y);
		std::cout << "Do you want to input extra integer?(Y or N)\n";
		std::cin >> c;
	}
	double sum = 0, average = 0;
	for (int y : x) {
		sum += y;
	}
	average = sum / x.size();
	std::cout << std::format("The sum of your input is {} and the average of them is {}.\n", sum, average);
}