#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

int maxXor(int l, int r) {
    //brute force O(n^2)
    auto m = numeric_limits<int>::min();
    for(auto A = l; A <= r; ++A) {
        for(auto B = l; B <= r; ++B) {
            m = max(m, A ^ B);  
        }
    }
    return m;
}

int main() {
    int L, R; cin >> L >> R;
    cout << maxXor(L, R);
}