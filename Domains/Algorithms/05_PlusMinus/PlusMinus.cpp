#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;


int main() {
    int positives = 0;
    int negatives = 0;
    int zeros = 0;
    int inputs = 0;
    cin >> inputs;
    
    for (int i = 0; i < inputs; i++) {
        int number;
        cin >> number;
        if (number > 0) {
            positives++;
        }
        if (number < 0) {
            negatives++;
        }
        else if (number == 0) {
            zeros++;
        }
    }
    
    cout << fixed << setprecision(3) << ((double)positives/(double)inputs) << endl << ((double)negatives/(double)inputs) << endl << ((double)zeros/(double)inputs) << endl;
    return 0;
}

