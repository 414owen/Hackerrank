#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string int_to_binary_string(int number) {
    if (number == 0) {return "";}
    if (number % 2 == 0) {
        return (int_to_binary_string(number/2) + "0");
    }
    else {return (int_to_binary_string(number/2) + "1");}
}

int main() {
    int cases;
    cin >> cases;
    for (int i= 0; i < cases; i++) {
        int decimal;
        cin >> decimal;
        cout << int_to_binary_string(decimal) << endl;
    }
    return 0;
}
