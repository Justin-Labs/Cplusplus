#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
    string part_1 = "When one door shuts";
    string part_2 = "another opens";

    string proverb = part_1 + " " + part_2; //use the + operator to concatenate the two and
                                            // add a space between words shuts and another.

    cout << "Concatenated string: " << proverb << endl;

    return 0;
}

    