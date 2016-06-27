//https://www.hackerrank.com/contests/code-cpp-4/challenges/cpp-variadics

#include <vector>

template<bool...digits>
int reversed_binary_value() {
    int val = 0;
    vector<bool> bits{ digits... };
    for(auto b = bits.rbegin(); b != bits.rend(); ++b)
        val = val << 1 | (*b ? 1 : 0);
    return val;
}