#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <utility>
using namespace std;


int main() {
    int N; cin >> N;
    map<char, int> elements{};
    for(auto c = 'a'; c <= 'z'; ++c)
        elements[c] = 0;
    for(auto a0 = 0; a0 < N; ++a0) {
        string s; cin >> s;
        sort(begin(s), end(s));
        auto e = unique(begin(s), end(s));   
        for(auto it = begin(s); it != e; ++it) {
            ++elements[*it];
        }
    }
    cout << count_if(begin(elements), end(elements), [&N](pair<char, int> p){return p.second == N;} );
    return 0;
}