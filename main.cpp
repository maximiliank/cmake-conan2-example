#include <fmt/color.h>
#include <fmt/format.h>

int main()
{
    fmt::print(fg(fmt::terminal_color::cyan), "Hello fmt {}!\n", FMT_VERSION);
    return 0;
}