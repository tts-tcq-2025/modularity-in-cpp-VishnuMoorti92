
#include "testmain.hpp"
#include <vector>
#include <string>
#include <functional>
#include <iostream>

int main() {
    std::string messages;
    auto printFunction = &messages {
        messages.push_back(msg);
    };

    testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
    testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);

    testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
    testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);

    TelCoColorCoder::PrintColorCodeManual();
    return 0;
}

