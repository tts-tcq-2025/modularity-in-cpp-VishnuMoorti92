#include <iostream>
#include <string>
#include <cassert>
#include "ColorCoder.hpp"

namespace TelCoColorCoder
{
    ColorPair GetColorFromPairNumber(int pairNumber);
    int GetPairNumberFromColor(MajorColor major, MinorColor minor);
    void PrintColorCodeManual();
}
