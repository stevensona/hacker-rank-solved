#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(int argc, char** argv) {
    int N; cin >> N;
    vector<int> sticks(N);
    for(auto a0 = 0; a0 < N; ++a0) {
        cin >> sticks[a0];
    }
    auto last_stick = end(sticks);
    while(last_stick != begin(sticks)) {
        auto cutsize = *min_element(begin(sticks), last_stick);
        transform(begin(sticks), last_stick, begin(sticks), [&cutsize](int a){return a - cutsize;});
        cout << last_stick - begin(sticks) << '\n';
        last_stick = remove_if(begin(sticks), last_stick, [](int a) {return a == 0;});
    }
}
