import <iostream>;
import <format>;
import <numbers>;
int main()
{
    std::cout << std::format("{:<20}{:<40}{:<30}\n", "Constant", "Description", "Approximation Value");
    std::cout << std::format("{:<20}{:<40}{:<.5f}...\n", "std::numbers::e", "The base of the natural logarithm", std::numbers::e);
    std::cout << std::format("{:<20}{:<40}{:<.5f}...\n", "std::numbers::pi", "pi", std::numbers::pi);
    std::cout << std::format("{:<20}{:<40}{:<.5f}...\n", "std::numbers::sqrt2", "Square root of 2", std::numbers::sqrt2);
    std::cout << std::format("{:<20}{:<40}{:<.3f}...\n", "std::numbers::phi", "The golden ratio constant phi", std::numbers::phi);
}