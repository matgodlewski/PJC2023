# Reversing words in text

A slightly more advanced way to manipulate text is to reverse the order of words. For example, if we have the sentence Ala has a cat, if we reverse the order of the words, we get Ala's cat.

Write a reversedWords() function that will accept text (std::string) as an argument and return a new string of the same type with the words in reverse order.

    Treat a word as any string of non-white characters separated by whitespace or the beginning/end of text.

    White space is, for example, a space, tab or newline character.

Call example:

    auto main() -> int {
        fmt::println(
                "{}\n{}\n{}\n{}",
                reversedWords("Ala ma kota"),
                reversedWords("Ala"),
                reversedWords(""),
                reversedWords("1 2 3")
        );
    }

    kota ma Ala
    Ala

    3 2 1