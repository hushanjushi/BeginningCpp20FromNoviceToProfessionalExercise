import <iostream>;
import <format>;
import <numbers>;
import <cmath>;
int main()
{
    double height, weight;
    std::cout << "Please input your height(in foot) and weight(in pound):" << std::endl;
    std::cin >> height >> weight;
    height *= 0.3048;
    weight /= 2.2;
    std::cout << std::format("Your BMI is {}.", weight / (height * height)) << std::endl;
}