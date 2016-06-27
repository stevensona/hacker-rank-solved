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
        cout << end(s) - unique(begin(s), end(s)) << '\n';
    }
    return 0;
}
