#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int t; cin >> t;
    for(auto a0 = 0; a0 < t; a0++){
        int n, h = 1; cin >> n;
        while(true) {
            if(n-- > 0) h = h * 2;
            if(n-- > 0) ++h;
            if(n <= 0) break;
        }
        cout << h << '\n';
    }
}