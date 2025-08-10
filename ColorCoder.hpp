#include <iostream>
#include <string>
#include <cassert>

namespace TelCoColorCoder
{
    enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};
    extern const char* MajorColorNames[];
    extern const int numberOfMajorColors;
    extern const char* MinorColorNames[];
    extern const int numberOfMinorColors;

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
    void PrintColorCodeManual();
}
