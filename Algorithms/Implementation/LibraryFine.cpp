#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int Da, Ma, Ya, De, Me, Ye; cin >> Da >> Ma >> Ya >> De >> Me >> Ye;
    if(Ya > Ye) {
        cout << 10000;
        return 0;
    }
    if(Ma > Me && Ya >= Ye) {
        cout << 500 * (Ma - Me);
        return 0;
    }
    if(Da > De && Ya >= Ye && Ma >= Me) {
        cout << 15 * (Da - De);
        return 0;
    }
    cout << 0;
    return 0;
}