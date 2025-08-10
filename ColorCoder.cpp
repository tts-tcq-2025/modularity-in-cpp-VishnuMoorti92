#include <iostream>
#include <string>
#include <cassert>
#include "ColorCoder.hpp"

namespace TelCoColorCoder
{
    const char* MajorColorNames[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const int numberOfMajorColors = std::size(MajorColorNames);

    const char* MinorColorNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    const int numberOfMinorColors = std::size(MinorColorNames);

    ColorPair::ColorPair(MajorColor major, MinorColor minor)
        : majorColor(major), minorColor(minor) {}

    MajorColor ColorPair::getMajor() const {
        return majorColor;
    }

    MinorColor ColorPair::getMinor() const {
        return minorColor;
    }

    std::string ColorPair::ToString() const {
        return std::string(MajorColorNames[majorColor]) + " " + MinorColorNames[minorColor];
    }
}
