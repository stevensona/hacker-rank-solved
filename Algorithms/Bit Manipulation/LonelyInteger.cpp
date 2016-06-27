#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> counts(101, 0);
    int N; cin >> N;
    for(auto a0 = 0; a0 < N; ++a0) {
        int ax; cin >> ax;
        ++counts[ax];
    }
    
    cout << distance(begin(counts), find(begin(counts), end(counts), 1));
    
}