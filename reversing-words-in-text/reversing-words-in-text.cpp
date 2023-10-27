#include "fmt/ranges.h"
#include <algorithm>
#include <vector>
#include <ranges>

auto reversedWords(std::string sentence) -> std::string {
    std::ranges::reverse(sentence);
    sentence += ' ';
    for (auto wordBegin = sentence.begin();
         wordBegin != sentence.end();) {
        auto wordEnd = std::ranges::find(wordBegin, sentence.end(), ' ');
        std::ranges::reverse(wordBegin, wordEnd);
        wordBegin = wordEnd + 1;
    }
    return sentence;
}

auto main() -> int {
    fmt::println(
            "{}\n{}\n{}\n{}\n",
            reversedWords("Ala ma kota"),
            reversedWords("Ala"),
            reversedWords(""),
            reversedWords("1 2 3")
    );
}
