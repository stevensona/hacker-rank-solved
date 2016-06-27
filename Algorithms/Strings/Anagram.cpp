#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int changes_required(const string& str) {
    if(str.size() % 2 != 0) return -1;
    auto s1 = string(begin(str), begin(str) + str.size() / 2);
    auto s2 = string(begin(str) + str.size() / 2, end(str));
    string diff;
    sort(begin(s1), end(s1));
    sort(begin(s2), end(s2));
    set_difference(begin(s1), end(s1), begin(s2), end(s2),
                   inserter(diff, begin(diff)));
    return diff.size();
        
}

int main() {
    int T; cin >> T;
    for(auto a0 = 0; a0 < T; ++a0) {
        string s; cin >> s;
        cout << changes_required(s) << '\n';
    }
    return 0;
}