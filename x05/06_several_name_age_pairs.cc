/**
 * Read several name/age pairs into a class, defining my own `<<` and `>>`
 * operators.
 */

#include <iostream>
#include <string>
#include <utility>
#include <vector>

using std::cin; using std::cout; using std::endl;
using std::istream;
using std::string;
using std::pair;
using std::vector;

class NameAgePairs
{
public:
    // Constructor
    NameAgePairs(int max) : pairs(new vector<pair<string, int>>[max]), sz(max) {}

    // Overload the `>>` operator
    friend istream& operator>>(istream& input, NameAgePairs& obj)
    {
        pair<string, int> na_pair;
        input >> na_pair.first >> na_pair.second;
        obj.pairs.push_back(na_pair);
        return input;
    }

private:
    vector<pair<string, int>>* pairs;
    int sz;
};

int main()
{
    NameAgePairs pairs(8);

    cout << "Please enter several name and age pairs (hit `Enter` after each pair), e.g. 'John 44': ";

    while (cin >> pairs)
    {
        // Do nothing
    }

    // Continue processing from here

    return 0;
}
