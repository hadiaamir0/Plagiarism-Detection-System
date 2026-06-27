#include "HashAnalyzer.h"

long long HashAnalyzer::generateHash(
    const std::string& text)
{
    long long hash = 0;

    for(char ch : text)
    {
        hash =
        hash * 31 + ch;
    }

    return hash;
}