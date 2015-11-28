#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int cases;
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        int digits;
        cin >> digits;
        int outputs = 0;
        //cout << "case "<< i+1 << endl;
        for (int j = 0; j <= digits; j++) {
            int fives = (digits - j);
            int threes = (j);
            string output = "";
            outputs = 0;
           // cout << ((fives % 3) == 0) << " " <<((threes % 5) == 0) << endl;
            if (((fives % 3) == 0) && ((threes % 5) == 0)) {
                for (int k = 0; k < digits; k++) {
                    if (k <= (fives -1)) {
                        output += "5";
                    }
                    else {
                        output += "3";
                    }
                }
                cout << output << endl;
                outputs = 1;
            }
            
            if (outputs != 0) {
                break;
            }
        }
        if (outputs == 0) {
            cout << "-1" << endl;
        }
    }
    return 0;
}

