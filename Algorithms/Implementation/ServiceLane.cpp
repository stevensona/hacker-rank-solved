#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char** argv){
    int n;
    int t;
    cin >> n >> t;
    vector<int> width(n);
    for(auto a0 = 0; a0 < n; ++a0){
        cin >> width[a0];
    }
    for(auto a0 = 0; a0 < t; a0++){
        int i, j; cin >> i >> j;
        cout << *min_element(begin(width) + i, begin(width) + j + 1) << '\n';
    }

}
