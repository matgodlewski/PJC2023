#include "fmt/ranges.h"
#include <algorithm>
#include <vector>
#include <ranges>

auto example(
        std::vector<std::string> &left, std::vector<std::string> &right
) -> void {
    auto eraseDuplicates = [](std::vector<std::string> &vec) {
        std::ranges::sort(vec);
        auto duplicates = std::ranges::unique(vec);
        vec.erase(duplicates.begin(), duplicates.end());
    };

    auto customSort = [](std::vector<std::string> &vec) {
        std::ranges::sort(vec, [](const std::string& a, const std::string& b) {
            if ((a.front() >= '0' && a.front() <= '9' && b.front() >= '0' && b.front() <= '9') ||
                (a.front() < '0' && b.front() < '0') || (a.front() >= 'A' && b.front() >= 'A')) {
                return a < b;
            }
            return a.front() >= '0' && a.front() <= '9';
        });
    };

    eraseDuplicates(left);
    eraseDuplicates(right);

    customSort(left);
    customSort(right);
}

auto main() -> int {

}
