#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T; cin >> T;
    for(auto a0 = 0; a0 < T; ++a0) {
        string s1, s2, diff; cin >> s1 >> s2;
        sort(begin(s1), end(s1));
        sort(begin(s2), end(s2));
        set_intersection(begin(s1), end(s1), begin(s2), end(s2),
                       inserter(diff, begin(diff)));
        cout << (diff.size() > 0 ? "YES\n" : "NO\n");
    }
   
}