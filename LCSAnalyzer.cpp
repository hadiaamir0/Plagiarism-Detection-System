#include "LCSAnalyzer.h"
#include <vector>
#include <algorithm>

int LCSAnalyzer::computeLCS(
    const std::string& s1,
    const std::string& s2)
{
    int n = s1.length();
    int m = s2.length();

    std::vector<std::vector<int>>
    dp(n + 1,
       std::vector<int>(m + 1, 0));

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            if(s1[i-1] == s2[j-1])
            {
                dp[i][j] =
                dp[i-1][j-1] + 1;
            }
            else
            {
                dp[i][j] =
                std::max(
                    dp[i-1][j],
                    dp[i][j-1]
                );
            }
        }
    }

    return dp[n][m];
}

double LCSAnalyzer::calculateSimilarity(
    const std::string& s1,
    const std::string& s2)
{
    int lcs = computeLCS(s1,s2);

    int maxLength =
        std::max(
            s1.length(),
            s2.length());

    return
    ((double)lcs / maxLength) * 100;
}