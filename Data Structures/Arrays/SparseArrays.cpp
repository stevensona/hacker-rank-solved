#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    vector<string> strings;
    int N, Q; cin >> N;
    for(auto a0 = 0; a0 < N; ++a0) {
        string s; cin >> s;
        strings.push_back(s);
    }
    cin >> Q;
    for(auto a0 = 0; a0 < Q; ++a0) {
        string s; cin >> s;
        cout << count(begin(strings), end(strings), s) << '\n';
    }
    
    return 0;
}
