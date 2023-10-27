# Refactoring using lambdas and algorithms

### Replacing repetitive implementations with local lambda
Let's assume we're dealing with code that checks whether both std::string objects passed in start with a capital letter:

    auto example(std::string& left, std::string& right) -> void {
        if (left.front() >= 'A' and left.front() <= 'Z' and right.front() >= 'A' and right.front() <= 'Z') {
        // ...
        }
    }

Naturally, such code can be improved by separating appropriate parts of the expression being checked into named variables:

    auto example(std::string& left, std::string& right) -> void {
        auto leftStartsWithUppercase  = left.front() >= 'A' and left.front() <= 'Z';
        auto rightStartsWithUppercase = right.front() >= 'A' and right.front() <= 'Z';
    
        if (leftStartsWithUppercase and rightStartsWithUppercase) {
            // ...
        }
    }

However, sometimes a better idea is to use a local function that is so specific that it is not worth introducing it into the global space:

    auto example(std::string& left, std::string& right) -> void {
        auto startsWithUppercase = [](std::string& str) {
            return str.front() >= 'A' and str.front() <= 'Z';
        };
    
        if (startsWithUppercase(left) and startsWithUppercase(right)) {
            // ...
        }
    }

### Task

Apply refactoring to the function below. Identify what specific pieces of code do. Use local lambdas to isolate repetitive code.

    auto example(
            std::vector<std::string> left, std::vector<std::string> right
    ) -> void {
        std::ranges::sort(left);
        auto duplicates = std::ranges::unique(left);
        left.erase(duplicates.begin(), duplicates.end());
    
        std::ranges::sort(right);
        duplicates = std::ranges::unique(right);
        right.erase(duplicates.begin(), duplicates.end());
    
        if (left.size() < right.size()) {
            for (auto i = 0; i < right.size(); i++) {
                for (auto j = 0; j < right.size() - 1 - i; j++) {
                    // both start with a digit or both start with a letter
                    if ((right[j].front() >= '0' and
                         right[j].front() <= '9' and
                         right[j + 1].front() >= '0' and
                         right[j + 1].front() <= '9')
                        or
                        ((right[j].front() < '0' or
                         right[j].front() > '9') and
                         (right[j + 1].front() < '0' or
                         right[j + 1].front() > '9'))) {
                        if (right[j] > right[j + 1]) {
                            std::ranges::swap(right[j], right[j + 1]);
                        }
                    } else { // leading digits last
                        if (right[j].front() >= '0' and right[j].front() <= '9') {
                            std::ranges::swap(right[j], right[j + 1]);
                        }
                    }
                }
            }
        } else {
            for (auto i = 0; i < left.size(); i++) {
                for (auto j = 0; j < left.size() - 1 - i; j++) {
                    // both start with a digit or both start with a letter
                    if ((left[j].front() >= '0' and
                         left[j].front() <= '9' and
                         left[j + 1].front() >= '0' and
                         left[j + 1].front() <= '9')
                        or
                        ((left[j].front() < '0' or
                          left[j].front() > '9') and
                         (left[j + 1].front() < '0' or
                          left[j + 1].front() > '9'))) {
                        if (left[j] > left[j + 1]) {
                            std::ranges::swap(left[j], left[j + 1]);
                        }
                    } else { // leading digits last
                        if (left[j].front() >= '0' and left[j].front() <= '9') {
                            std::ranges::swap(left[j], left[j + 1]);
                        }
                    }
                }
            }
        }
    }
