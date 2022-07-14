import <iostream>;
import <format>;
int main()
{

    std::cout << "Please input a integer:\n";
    int n;
    std::cin >> n;
    
    std::cout << std::format("{:^10}{:^32} {:^32} {:^32}\n","","The orgin value","The bits inverted","that same inverted value plus 1");
    unsigned m = static_cast<unsigned>(n);
    std::cout << std::format("{:^10}{:0>32b} {:0>32b} {:0>32b}\n", "Unsigned", m, ~m, ~m + 1);
    std::cout << std::format("{:^10}{:>32d} {:>32d} {:>32d}\n", "Signed", n, ~n, ~n + 1);
}