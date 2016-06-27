//https://www.hackerrank.com/contests/code-cpp-4/challenges/magic-spells

    auto lcs = [](const string& X, const string& Y) {
        int m = X.size(), n = Y.size();
        int L[m+1][n+1];
        for(auto i = 0; i <= m; i++) {
            for(auto j = 0; j <= n; j++) {
                if (i == 0 || j == 0) L[i][j] = 0;
                else if (X[i-1] == Y[j-1])
                    L[i][j] = L[i-1][j-1] + 1;
                else
                    L[i][j] = max(L[i-1][j], L[i][j-1]);
            }
        }
        return L[m][n];
    };

    try{
        dynamic_cast<Waterbolt&>(*spell).revealWaterpower();
    } catch(...) {
        try{
            dynamic_cast<Fireball&>(*spell).revealFirepower();
        } catch(...) {
            try{
                dynamic_cast<Frostbite&>(*spell).revealFrostpower();
            } catch(...) {
                try{
                    dynamic_cast<Thunderstorm&>(*spell).revealThunderpower();
                } catch(...) {
                    cout << lcs(spell->revealScrollName(), SpellJournal::read()) << '\n';
                }
            }
        }
        
    }
