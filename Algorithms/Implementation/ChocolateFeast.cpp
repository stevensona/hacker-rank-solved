#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T; cin >> T;
    for(auto a0 = 0; a0 < T; ++a0) {
        int N, C, M; cin >> N >> C >> M;
        int candy = 0;
        int wrappers = 0;
        while( N >= C || wrappers >= M ) {
            int bought = N / C, traded = wrappers / M;
            N -= bought * C;
            wrappers -= traded * M;
            candy += bought + traded;
            wrappers += bought + traded;
        }
        cout << candy << '\n';
    }
    return 0;
}