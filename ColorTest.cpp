#include <iostream>
#include <string>
#include "ColorCode.hpp"

using namespace std;
using namespace color;

int main()
{
    ccout.setColors("Bold", "Cyan", "Default");
    ccout << "Hi There!\n" << "hi\n";
    ccout.setColors("Underlined", "Red", "Default");
    ccout << "How are you?\n";
    ccout << 40;

    ccout.setColors("Bold", "Green", "Default");
    ccout << "More testing\n";

    cout << "\033[0;33mHi\033[0m" << endl;

    return 0;
}