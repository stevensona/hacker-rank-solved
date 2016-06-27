#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    int N, q, p; cin >> N;
    vector<int> s;
    s.reserve(N * 2);
    int max = 0;
    bool cache = false;
    for(auto a0 = 0; a0 < N; ++a0) {
        cin >> q;
        switch(q) {
            case 1:
                cin >> p;
                s.push_back(p);
                if(p > max) {
                    max = p;
                    cache = true;
                }
                break;
            case 2:
                if(s.back() == max)
                    cache = false;
                s.pop_back();
                break;
            case 3:
                if(!cache) {
                    max = *max_element(begin(s), end(s));
                    cache = true;
                }
                cout << max << '\n';
        }
    }
    return 0;
}