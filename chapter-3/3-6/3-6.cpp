import <iostream>;
import <format>;
import <cmath>;
int main()
{
    std::cout << "Please input two integers:\n";
    int a, b;
    std::cin >> a >> b;
    b = a + b;
    a = a + b;
    b = a - b;
    a = a - 2 * b;
    std::cout << std::format("The swapped result is:{},{}", a, b);
}