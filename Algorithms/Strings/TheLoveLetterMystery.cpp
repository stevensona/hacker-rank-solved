#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int T; cin >> T;
    for(auto a0 = 0; a0 < T; ++a0) {
        string s; cin >> s;
        int ops = 0;
        for(auto i = 0; i < s.size() / 2; ++i) {
            ops += abs(s[i] - s[s.size() - 1 - i]);
        }
        cout << ops << '\n';
    }
    return 0;
}