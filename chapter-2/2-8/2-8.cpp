import <iostream>;
import <format>;
import <cmath>;
int main()
{
    std::cout << "Please input two positive integer:\n";
    int m, n;
    std::cin >> m >> n;
    std::cout << std::format("The bigger one is: {}, the smaller one is {}.\n", (m + n) / 2.0 + std::fabs(m - n)/2, (m + n) / 2.0 - std::fabs(m - n)/2);
}