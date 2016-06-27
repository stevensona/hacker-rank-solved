#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    auto count = 0, sum = 0;
    cin >> count;
    while(count-- > 0) {
        auto val = 0;
        cin >> val;
        sum += val;
    }
    cout << sum;
    return 0;
}
