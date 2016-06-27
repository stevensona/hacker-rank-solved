#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    for(auto y = 0; y < n; y++) {
        for(auto x = 0; x < n; x++) {
            cout << (x < (n - 1 - y) ? ' ' : '#');
        }
        cout << '\n';
    }
    return 0;
}
