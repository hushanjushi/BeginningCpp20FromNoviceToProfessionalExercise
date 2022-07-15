import <iostream>;
import <vector>;
import <format>;

int main() {
	std::vector<int> product{ 1001,1003 }, quantity{ 25,10 };
	std::vector<double> unit_price{ 9.95,15.50 };

	std::cout << std::format("{:<10}{:<15}{:<15}{:<10}\n", "Product", "Quatity", "Unit Price", "Cost");
	double sum = 0;
	for (int i = 0; i < product.size(); i++) {
		std::cout << std::format("{:<10}{:<15}${:<14.2f}${:<9.2f}\n", product[i], quantity[i], unit_price[i], quantity[i]* unit_price[i]);
		sum += quantity[i] * unit_price[i];
	}
	std::cout << std::format("{:<40}${:<9.2f}\n", " ", sum);
}