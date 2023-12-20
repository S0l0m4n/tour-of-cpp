/**
 * Read a name and age from the standard input stream and print them out in a
 * message.
 */

#include <iostream>

using std::cin; using std::cout; using std::endl;
using std::string;

int main()
{
    string name;
    int age;

    cout << "Please enter the name and age, e.g. 'John 44': ";
    cin >> name >> age;  

    cout << "Welcome " << name << "! Your age is " << age << endl;

    return 0;
}
