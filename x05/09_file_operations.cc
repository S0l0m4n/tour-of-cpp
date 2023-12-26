/**
 * Write a few hundred integers to a file. Read them back.
 */

#include <fstream>
#include <iostream>
#include <string>

const std::string file_name {"tmp.txt"};

int main()
{
    std::fstream file;
    file.open(file_name);

    const auto MAX {500};

    for (auto i = 1; i <= MAX; i++)
        file << i << " ";
    file << std::endl;

    // Reopen file
    file.close();
    file.open(file_name);

    // Sum all of the integers in the file and print the result
    int sum = 0;
    for (int x; file >> x; )
        sum += x;
    std::cout << "Sum = " << sum << std::endl;

    return 0;
}
