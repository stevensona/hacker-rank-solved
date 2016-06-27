#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T; cin >> T;
    for(auto a0 = 0; a0 < T; ++a0) {
        long long int a, b; cin >> a >> b;
        int s = ceil(pow(a, 0.5));
        int squares = 0;
        while(s * s <= b) {
            s++;
            squares++;
        }
        cout << squares << '\n';
    }
    return 0;
}