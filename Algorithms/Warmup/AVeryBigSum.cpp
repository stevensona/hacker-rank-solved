#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int count = 0;
    unsigned long int sum = 0;
    cin >> count;
    while(count-- > 0) {
        unsigned long int num = 0;
        cin >> num;
        sum += num;   
    }
    cout << sum;
    return 0;
}
