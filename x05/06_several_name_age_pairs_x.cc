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
    NameAgePairs(int max) : elems {new pair<string, int>[max]}, sz {max} {}

    bool add_pair(pair<string, int> na_pair) {
        if (count < sz) {
            elems[count] = na_pair;
            count++;
            return true;
        }
        return false;
    }

    std::string get_name(int i) {
        if (i < count)
            return elems[i].first;
        return "NULL";
    }

    int get_size() {
        return count;
    }

private:
    pair<string, int>* elems;
    int sz;
    int count = 0;
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
