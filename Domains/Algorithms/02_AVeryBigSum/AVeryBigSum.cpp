#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long total = 0;
    int howMany;
    cin >> howMany;
    for (int i = 0; i < howMany; i++) {
        long next;
        cin >> next;
        total += next;
    }
    cout << total;
    return 0;
}
