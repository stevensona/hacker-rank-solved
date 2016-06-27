#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    string s1, s2, diff; cin >> s1 >> s2;
    sort(begin(s1), end(s1));
    sort(begin(s2), end(s2));
    set_symmetric_difference(begin(s1), end(s1), begin(s2), end(s2),
                   inserter(diff, begin(diff)));
    cout << diff.size();
    return 0;
}