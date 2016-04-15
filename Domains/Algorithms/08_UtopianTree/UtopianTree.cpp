#include <iostream>
using namespace std;

int height(int n) {
    return 0;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int height = 1;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                height = height * 2;
               // cout << "doubled" << endl;
            }
            else {
                height +=1;
               // cout << "plus one" << endl;
            }
        }
        cout << height << endl;
    }
}

