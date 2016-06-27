#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
void insertionSort(vector <int>  ar) {
    for(auto it = begin(ar) + 1; it != end(ar); ++it) {
        auto to_sort = it, spot = it - 1;

        while(*to_sort < *spot)
            swap(*to_sort--, *(spot--));

        for(auto v: ar)
            cout << v << ' ';
        cout << '\n';
    }
}
int main(void) {
    int s; cin >> s;
    vector <int>  ar(s);
    for(auto i = 0; i < s; ++i) {
        cin >> ar[i];
    }
    insertionSort(ar);
    return 0;
}