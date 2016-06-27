//https://www.hackerrank.com/contests/code-cpp-4/challenges/prettyprint


    cout.flags(ios::left | ios::hex | ios::showbase | ios::fixed );
    cout.width(0);
    cout << (long long)A << '\n';
    
    cout.flags(ios::right | ios::fixed | ios::showpos);
    cout.fill('_');
    cout.width(15);
    cout.precision(2);
    cout << B << '\n';
    
    cout.flags(ios::scientific | ios::uppercase);
    cout.width(0);
    cout.precision(9);
    cout << C << '\n';