/**
 * Read several name/age pairs into a class, defining my own `<<` and `>>`
 * operators.
 */

#include <iostream>
#include <string>
#include <utility>
#include <vector>

using std::string;
using std::pair;
using std::vector;

class NameAgePairs {
public:
    // Constructor
    NameAgePairs(int max) : pairs {vector<pair<string, int>>} {}
    // NOTE: Don't need to use `new` as `vector` class allocates memory

    ~NameAgePairs() {delete pairs}
    // Delete memory allocated by `pairs` vector

    void add_pair(pair<string, int>& na_pair) {
        pairs->push_back(na_pair);
    }

    std::string get_name(int i) {
        if (i < pairs.size())
            return pairs[i].first;
        return "NULL";
    }

    int get_size() {
        return pairs.size();
    }

private:
    vector<pair<string, int>>* pairs;
};

// Overload the `>>` operator
std::istream& operator>>(std::istream& input, NameAgePairs& na_pairs) {
    pair<string, int> na_pair;
    if (input >> na_pair.first >> na_pair.second)
        na_pairs.add_pair(na_pair);
    return input;
}

int main()
{
    NameAgePairs pairs(8);

    std::cout << "Please enter several name and age pairs (hit `Enter` after each pair), e.g. 'John 44': "
              << std::endl;

    while (std::cin >> pairs) {
        // Do nothing
    }

    // Continue processing from here
    for (auto i = 0; i < pairs.get_size(); i++) {
        std::cout << pairs.get_name(i) << std::endl;
    }

    return 0;
}
