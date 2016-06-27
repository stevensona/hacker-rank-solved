#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int hg_sum(const vector<vector<int>> &xs, const int c, const int r) {
    return accumulate(begin(xs[r])+c, begin(xs[r])+c + 3, 0) +
        accumulate(begin(xs[r+2])+c, begin(xs[r+2])+c + 3, 0) +
        xs[r+1][c+1];
}

int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++)
       for(int arr_j = 0;arr_j < 6;arr_j++)
          cin >> arr[arr_i][arr_j];

    auto maxI = -9 * 7 - 1; //least possible sum -1
    for(auto c = 0; c < 4; ++c)
        for(auto r = 0; r < 4; ++r)
            maxI = max(maxI, hg_sum(arr, c, r));
    
    cout << maxI;
}
