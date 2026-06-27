#ifndef HASH_ANALYZER_H
#define HASH_ANALYZER_H

#include <string>

class HashAnalyzer
{
public:
    long long generateHash(
        const std::string& text
    );
};

#endif