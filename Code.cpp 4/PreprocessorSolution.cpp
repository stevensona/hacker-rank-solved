//https://www.hackerrank.com/contests/code-cpp-4/challenges/preprocessor-solution

#include <limits>

#define toStr(a) #a
#define io(a) cin >> a
#define FUNCTION(name, op) void name(int &a, int b) { a = a op b ? a : b; }
#define INF std::numeric_limits<int>::max()
#define foreach(v, i) for(auto i = 0; i < v.size(); ++i)