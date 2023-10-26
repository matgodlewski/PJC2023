#include <iostream>
#include <vector>
#include <fmt/ranges.h>

using namespace std;

auto boxPrint(const vector<string> &words, char character = '*') -> void {
    size_t max_length = 2;
    for (const auto &word: words) max_length = word.size() > max_length ? word.size() + 2 : max_length;
    fmt::println("{}", string(max_length, character));
    for (const auto &str: words) fmt::println("{2}{0:<{1}}{2}", str, max_length - 2, character);
    fmt::println("{}\n", string(max_length, character));
}

auto main() -> int {
    boxPrint({"a", "quick", "brown", "fox"});
    boxPrint({"a", "quick", "brown", "fox"}, '*');
    boxPrint({"a", "quick", "brown", "fox"}, '#');
    boxPrint(std::vector<std::string>{"a", "quick", "brown", "fox"}, '#');
    boxPrint({""});
    boxPrint({});
    boxPrint({}, '#');
    boxPrint({"", "hmmmm", ""});
    boxPrint({"", "", ""});
}