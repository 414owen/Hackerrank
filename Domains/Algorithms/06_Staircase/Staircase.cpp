#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    
    int height;
    cin >> height;
    for (int i = 0; i < height; i++) {
        string spaces = "";
        string hashes = "";
        for (int j = 0; j < height-i-1; j++) {
            spaces += " ";
        }
        for (int k = 0; k < i + 1; k++) {
            spaces += "#";
        }
        
        cout << spaces << hashes << endl;
    }
    return 0;
}

