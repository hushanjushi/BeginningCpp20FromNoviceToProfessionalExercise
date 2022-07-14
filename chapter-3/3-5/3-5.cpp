import <iostream>;
import <format>;
int main()
{
    enum class Color:unsigned{ Red = 0xFF0000, Green = 0x00FF00, Yellow = 0xFFFF00, Purple = 0xA020F0,
        Blue = 0x0000FF, Black = 0x000000, White = 0xFFFFFF };
    Color yellow{ Color::Yellow }, purple{ Color::Purple }, green{ Color::Green };
    std::cout << std::format("The correlated RGB value of colors is:\n yellow:{:#08x},purple:{:#08x},green:{:#08x}\n", static_cast<unsigned>(yellow), static_cast<unsigned>(purple), static_cast<unsigned>(green));
}