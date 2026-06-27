#ifndef LCS_ANALYZER_H
#define LCS_ANALYZER_H

#include <string>

class LCSAnalyzer
{
public:
    int computeLCS(
        const std::string& s1,
        const std::string& s2
    );

    double calculateSimilarity(
        const std::string& s1,
        const std::string& s2
    );
};

#endif