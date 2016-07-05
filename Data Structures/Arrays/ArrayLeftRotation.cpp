//https://www.hackerrank.com/challenges/array-rotation-2

//Just print resulting array after operation.

#include <vector>
#include <iostream>
using namespace std;

int main() {
    int n, d; cin >> n >> d;
    vector<int> a{};
    for(auto i = 0; i < n; ++i) {
        int x; cin >> x; a.push_back(x);
        if(i >= d) cout << x << ' ';
    }
    for(auto i = 0; i < d; ++i)
        cout << a[i] << ' ';    
        
}
