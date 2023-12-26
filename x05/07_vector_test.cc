/**
 * Initialise a vector with a bunch of values and do some operations.
 * Includes generic print function (using templates) to print ints or strings.
 */

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using std::sort;
using std::cout; using std::endl;
using std::string;
using std::vector;

template<typename T>
void print(vector<T>& v) {
    for (auto x : v)
        cout << x << " ";
    cout << endl;
}

int main()
{
    vector<int> v {5, 9, -1, 200, 0};
    vector<string> w {"Kant", "Plato", "Aristotle", "Kierkegard", "Hume"};

    // Print vectors
    print(v);
    print(w);

    // Sort vectors
    sort(v.begin(), v.end());
    sort(w.begin(), w.end());

    // Print sorted vectors
    print(v);
    print(w);

    return 0;
}
