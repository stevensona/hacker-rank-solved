#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <time.h>
using namespace std;

int main(){
    string t; cin >> t;
    char c[9];
    struct tm tm;
    strptime(t.c_str(), "%I:%M:%S%p", &tm);
    strftime(c, 9, "%H:%M:%S", &tm);
    cout << c;
    return 0;
}
