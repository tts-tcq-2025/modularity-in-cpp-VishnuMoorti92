#include "GetColorPairNumber.hpp"

namespace TelCoColorCoder
{
    void PrintColorCodeManual() {
        std::out <<"Color Code Reference Manual:\n";
        std::out << "-----------------------------\n";

        for (int i = 1; i <= numberOfMajorColors * numberOfMinorColors; ++i) {
            ColorPair colorPair = GetColorFromPairNumber(i);
            std::out << i << " : " << colorPair.ToString() << "\n";
        }
    }
}
