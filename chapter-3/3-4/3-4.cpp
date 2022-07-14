// 3-4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

import <iostream>;
import <format>;
int main()
{
    char a, b, c, d;
    std::cout << "Please input four characters:\n";
    std::cin >> a >> b >> c >> d;
    std::cout << std::format("The four characters are:{:>2},{:>2},{:>2},{:>2}\n", a, b, c, d);
    std::cout << std::format("The four characters in hex are:{:0>#2x},{:0>#2x},{:0>#2x},{:0>#2x}\n", a, b, c, d);
    unsigned n = (a << 24) + (b << 16) + (c << 8) + d;
    std::cout << std::format("The integer value is {:0>#8x}\n", n);
    std::cout << std::format("The unpacked and reserved four characters are:{:>2},{:>2},{:>2},{:>2}\n", static_cast<char>((n << 24) >> 24), static_cast<char>((n << 16) >> 24), static_cast<char>((n << 8) >> 24), static_cast<char>(n >> 24));
}