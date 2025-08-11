#include <iostream>
#include <string>
#include <cassert>
#include "ColorPairCoder.hpp"
#include "ContentPrint.hpp"

namespace TelCoColorCoder
{
    ColorPair GetColorFromPairNumber(int pairNumber);
    int GetPairNumberFromColor(MajorColor major, MinorColor minor);
    void PrintColorCodeManual(std::function<void(std::string&)> prntline);
}
