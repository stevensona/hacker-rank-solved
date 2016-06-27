#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;


int main() {
    set<char> letters;
    for(char a0 = 97; a0 < 123; ++a0)
        letters.insert(a0);
    string input; getline(cin, input);
    for(auto letter: input)
        letters.erase(tolower(letter));
    cout << (letters.size() > 0 ? "not pangram" : "pangram");
}