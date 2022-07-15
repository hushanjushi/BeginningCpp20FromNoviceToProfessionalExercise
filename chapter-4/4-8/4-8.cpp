import <iostream>;
import <format>;

int main() {
	std::cout << "Please input the amount of money(in dollar):\n";
	double x;
	std::cin >> x;
	if (x < 0 || x>10) {
		std::cout << "We can't compute this range of money.\n";
		return 1;
	}
	double y=x;
	unsigned quarter = static_cast<unsigned>(y / 0.25);
	y -= 0.25 * quarter;
	unsigned dime = static_cast<unsigned>(y / 0.1);
	y -= 0.1 * dime;
	unsigned nickel = static_cast<unsigned>(y / 0.05);
	y -= 0.05 * nickel;
	unsigned pennie = static_cast<unsigned>(y / 0.01);
	std::cout << std::format("{:.2f} dollar is equal to {} {}, {} {}, {} {} and {} {}.\n",x, quarter, quarter <= 1 ? "quarter" : "quarters", \
		dime, dime <= 1 ? "dime" : "dimes", nickel, nickel <= 1 ? "nickel" : "nickels", pennie, pennie <= 1 ? "pennie" : "pennies");
}