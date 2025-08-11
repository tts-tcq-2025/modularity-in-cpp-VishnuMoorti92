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
        ColorPair(MajorColor major, MinorColor minor);
        MajorColor getMajor() const;
        MinorColor getMinor() const;
        std::string ToString() const;
    };
}
