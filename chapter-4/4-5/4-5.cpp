import <iostream>;
import <format>;

int main()
{
    int mice{};               // Count of all mice
    int brown{};              // Count of brown mice
    int white{};              // Count of white mice

    std::cout << "How many brown mice do you have? ";
    std::cin >> brown;
    std::cout << "How many white mice do you have? ";
    std::cin >> white;

    mice = brown + white;
    if (mice == 1) {
        if (brown == 1) {
            std::cout << "It is a brown mouse.\n";
        }
        else if (white == 1) {
            std::cout << "It is a white mouse.\n";
        }
    }
    else if(mice>1) {
        if (brown == 1 && white == 1) {
            std::cout << "Of these mice, 1 is a brown mouse and 1 is a white mouse.\n";
        }
        else if (brown == 1 && white != 1) {
            std::cout << std::format("Of these mice, 1 is a brown mouse and {} are white mice.",white);
        }
        else if (brown == 1 && white != 1) {
            std::cout << std::format("Of these mice, {} are brown mice and 1 is a white mouse.", brown);
        }
        else {
            std::cout << std::format("Of these mice, {} are brown mice and {} are white mice.", brown, white);
        }
    }
}