#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int V, n; cin >> V >> n;
    vector<int> ar;
    for(auto a0 = 0; a0 < n; a0++) {
        int a; cin >> a;
        ar.push_back(a);
    }
    cout << distance(ar.begin(), find(ar.begin(), ar.end(), V));
}