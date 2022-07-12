import <iostream>;
import <format>;

int main()
{
    unsigned inches,feet;
    std::cout << "Please input an integer of inches:" << std::endl;
    std::cin >> inches;
    feet = inches / 12;
    inches = inches % 12;
    std::cout << std::format("It's equal with {} feet and {} inches.", feet, inches);
}