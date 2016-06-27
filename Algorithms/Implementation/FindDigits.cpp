#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int t; cin >> t;
	for (int a0 = 0; a0 < t; a0++) {
		int n, N, c = 0; cin >> n; N = n;
		while (n > 0) {
			while (n % 10 == 0)
				n = n / 10;
			c += (N % (n % 10) == 0) ? 1 : 0;
			n = n / 10;
		}
		cout << c << '\n';
	}
}
