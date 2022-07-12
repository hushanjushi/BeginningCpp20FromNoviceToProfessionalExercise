import <iostream>;
import <format>;
import <numbers>;
int main()
{
    double radius;
    std::cout << "Please input the radius of the circle:" << std::endl;
    std::cin >> radius;
    std::cout << std::format("The radius of the circle is:{}", radius) << std::endl;
    std::cout << std::format("The area of the circle is:{}", std::numbers::pi*radius*radius);
}