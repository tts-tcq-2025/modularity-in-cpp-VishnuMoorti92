#include "ColorPairCoder.hpp"
#include "GetColorPairNumber.hpp"

namespace TelCoColorCoder
{
    void PrintColorCodeManual() {
        std::cout << "Color Code Reference Manual:\n";
        std::cout << "-----------------------------\n";
        for (int i = 1; i <= numberOfMajorColors * numberOfMinorColors; ++i) {
            ColorPair colorPair = GetColorFromPairNumber(i);
            std::cout << i << " : " << colorPair.ToString() << "\n";
        }
    }
}
