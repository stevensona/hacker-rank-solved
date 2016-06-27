#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, Q, lastAns = 0; cin >> N >> Q;
    vector<vector<int>> seqList(N);
    for(auto a0 = 0; a0 < Q; ++a0) {
        int q, x, y; cin >> q >> x >> y;
        auto index = (x ^ lastAns) % N;
        if(q == 1) {
            seqList[index].push_back(y);
        } else if(q == 2) {
            lastAns = seqList[index][y % seqList[index].size()];
            cout << lastAns << '\n';
        }
    }
}
