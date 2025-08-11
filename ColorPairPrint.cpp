#include "GetColorPairNumber.hpp"

namespace TelCoColorCoder
{
    void PrintColorCodeManual(std::function<void(std::string&)> prntline) {
        std::string Heading = "Color Code Reference Manual:\n";
        prntline(Heading);
        std::string Seperator = "-----------------------------\n";
        prntline(Seperator);
        std::string colorpair;
        for (int i = 1; i <= numberOfMajorColors * numberOfMinorColors; ++i) {
            ColorPair colorPair = GetColorFromPairNumber(i);
            colorpair = i + " : " + colorPair.ToString() + "\n";
            prntline(colorpair);
        }
    }
}
