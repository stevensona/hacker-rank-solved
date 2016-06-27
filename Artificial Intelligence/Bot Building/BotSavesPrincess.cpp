#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
void displayPathtoPrincess(int n, string grid){
    auto d = floor(n / 2.0);
    auto p = distance(grid.begin(), find(grid.begin(), grid.end(), 'p'));
    auto m = distance(grid.begin(), find(grid.begin(), grid.end(), 'm'));
    if(p > m){ for(auto i = 0; i < d; i++) cout << "DOWN\n"; swap(grid[m], grid[m + n]);}
    else{      for(auto i = 0; i < d; i++) cout << "UP\n"; swap(grid[m], grid[m - n]);}
    
    m = distance(grid.begin(), find(grid.begin(), grid.end(), 'm'));
    if(p > m){ for(auto i = 0; i < d; i++) cout << "RIGHT\n";}
    else{      for(auto i = 0; i < d; i++) cout << "LEFT\n";}

}
int main(void) {

    int m;
    string grid;

    cin >> m;

    for(int i=0; i<m; i++) {
        string s; cin >> s;
        grid.append(s);
    }

    displayPathtoPrincess(m,grid);

    return 0;
}
