#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    string input;
    cin >> input;
    int hours = ((input[0] - 48)*10 + input[1] - 48);
    int minutes = ((input[3] - 48)*10 + input[4] - 48);
    int seconds = ((input[6] - 48)*10 + input[7] - 48);
    if ((input[8] == 'P') && (hours != 12)) {
        
        hours += 12;
    }
    if (hours == 24) {
        hours = 0;
    }
    if ((hours == 12) && (input[8] == 'A')) {
        hours = 0;
    }

    
    cout << setw(2) << setfill('0') << hours  << ':' << setw(2) << setfill('0') << minutes << ':' << setw(2) << setfill('0') << seconds;

    return 0;
}
