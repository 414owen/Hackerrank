#include <cmath>
#include <iostream>
using namespace std;


int main() {
    int cases;
    cin >> cases;
    for (; cases > 0; cases--) {
        int a, b, N;
        cin >> a >> b >> N;
        for (int i = 0; i < N; i++) {
            int term = a;
            for (int j = 0; j < i + 1; j++) {
                term += (b * pow(2, j));
            }
            cout << term << " ";
        }
        cout << endl;
    }
    return 0;
}

