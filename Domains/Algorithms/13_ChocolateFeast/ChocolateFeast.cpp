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

int howManyChocolates(int m, int n, int c) {
    int chocolates = 0;
    while (n >= c) {
        chocolates += 1;
        n -= c;
        if ((chocolates % m) == 0) {
            chocolates += 1;
        }
    }
    return chocolates;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int c;
        int m;
        cin >> n >> c >> m;
        cout << howManyChocolates(m, n, c) << endl;
    }

    
    return 0;
}

