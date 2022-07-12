import <iostream>;
import <format>;
import <numbers>;
import <cmath>;
int main()
{
    double distance,height_feet,height_inches,angle;
    std::cout << "Please input the distance of the trees(inches):" << std::endl;
    std::cin >> distance;
    distance /= 12.0;
    std::cout << "Please input the height of the instrument(feet and inches):" << std::endl;
    std::cin >> height_feet>>height_inches;
    height_feet += height_inches / 12.0;
    std::cout << "Please input the angle of the instrument got(degree):" << std::endl;
    std::cin >> angle;
    angle *= std::numbers::pi / 180.0;
    std::cout << std::format("The height of the tree is {} feet.", height_feet+distance*std::tan(angle))<<std::endl;
}