#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    string s; cin >> s;
    vector<int> freq(26, 0);
    for(auto c : s)
        ++freq[c - 97];
    if(count_if(begin(freq), end(freq), [](int a) { return a % 2 != 0; }) <= 1)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}