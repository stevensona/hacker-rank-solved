#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    float size = static_cast<float>(arr.size());
    
    float pos = count_if(arr.begin(), arr.end(),[](int i){return i > 0;}) / size;
    float neg = count_if(arr.begin(), arr.end(),[](int i){return i < 0;}) / size;
    float zero = count_if(arr.begin(), arr.end(),[](int i){return i == 0;}) / size;
    
    cout << pos << '\n' << neg << '\n' << zero;
    return 0;
}
