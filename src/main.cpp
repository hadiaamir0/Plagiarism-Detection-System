#include <iostream>
#include <fstream>
#include <sstream>

#include "LCSAnalyzer.h"
#include "HashAnalyzer.h"

using namespace std;

string readFile(string filename)
{
    ifstream file(filename);

    stringstream buffer;

    buffer << file.rdbuf();

    return buffer.str();
}

int main()
{
    string doc1 =
    readFile(
        "test-data/document1.txt");

    string doc2 =
    readFile(
        "test-data/document2.txt");

    LCSAnalyzer lcs;

    HashAnalyzer hash;

    double similarity =
    lcs.calculateSimilarity(
        doc1,
        doc2);

    long long hash1 =
    hash.generateHash(doc1);

    long long hash2 =
    hash.generateHash(doc2);

    cout << "\n======================";
    cout << "\nPLAGIARISM DETECTOR";
    cout << "\n======================";

    cout << "\nLCS Similarity: "
         << similarity
         << "%";

    cout << "\nHash 1: "
         << hash1;

    cout << "\nHash 2: "
         << hash2;

    if(similarity > 80)
    {
        cout
        << "\nPotential Plagiarism Detected";
    }
    else
    {
        cout
        << "\nDocuments Appear Different";
    }

    return 0;
}