import <iostream>;
import <format>;

int main()
{
	std::cout << "Please input the dimensions of the shelf(in feet):\n";
	double x, y;
	std::cin >> x >> y;
	std::cout << "Please input the dimensions of the box(in inches):\n";
	int a, b;
	std::cin >> a >> b;
	unsigned num = std::max(static_cast<unsigned>(x * 12 / a) * static_cast<unsigned>(y * 12 / b), static_cast<unsigned>(y * 12 / a) * static_cast<unsigned>(x * 12 / b));
	std::cout << std::format("The number of boxes that the shelf can hold in a single layer is {}",num);
}