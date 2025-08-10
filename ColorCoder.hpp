#include <iostream>
#include <string>
#include <cassert>

namespace TelCoColorCoder
{
    enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};
    const char* MajorColorNames[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const int numberOfMajorColors = std::size(MajorColorNames);
    const char* MinorColorNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    const int numberOfMinorColors = std::size(MinorColorNames);

    class ColorPair {
    private:
        MajorColor majorColor;
        MinorColor minorColor;
    public:
        ColorPair(MajorColor major, MinorColor minor)
            : majorColor(major), minorColor(minor) {}
        MajorColor getMajor() const {
            return majorColor;
        }
        MinorColor getMinor() const {
            return minorColor;
        }
        std::string ToString() const {
            return std::string(MajorColorNames[majorColor]) + " " + MinorColorNames[minorColor];
        }
    };

    ColorPair GetColorFromPairNumber(int pairNumber);
    int GetPairNumberFromColor(MajorColor major, MinorColor minor);
}
