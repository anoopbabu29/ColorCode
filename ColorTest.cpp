#include <iostream>
#include <string>
#include "ColorCode.hpp"


int main()
{
    ColorCode colorOut;

    colorOut.setColors("Bold", "Cyan", "Default");
    colorOut << "Hi There!\n" << "hi\n";
    colorOut << "How are you?\n";


    return 0;
}