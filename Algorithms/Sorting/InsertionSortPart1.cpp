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
    int to_insert = ar.back();
    for(auto it = ar.rbegin(); it != ar.rend(); ++it){
        if(to_insert < *(it + 1))
            *it = *(it + 1);
        else {
            *it = to_insert;
            it = ar.rend();
            for(auto x: ar) cout << x << ' ';
            break;
        }
        for(auto x: ar) cout << x << ' ';

        cout << '\n';
    }

}
int main(void) {
    vector <int>  _ar;
    int _ar_size;
    cin >> _ar_size;
    for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
        int _ar_tmp;
        cin >> _ar_tmp;
        _ar.push_back(_ar_tmp); 
    }

    insertionSort(_ar);
    return 0;
}