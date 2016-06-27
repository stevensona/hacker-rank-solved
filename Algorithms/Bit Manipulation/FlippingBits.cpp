#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
//#include <stdint.h>
using namespace std;

uint32_t flip_bits(uint32_t x) {
    for(auto i = 0; i < 32; i++) {
        x ^= 1 << i;
    }
    return x;
}

int main() {
   
    vector<uint32_t> xs;
    uint32_t x;
    int T;
    cin >> T;
    while(T-- > 0) {
        cin >> x;
        cout << flip_bits(x) << '\n';
    }
    return 0;
}