#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int dimensions;
    cin >> dimensions;
    vector<int> matrix (dimensions*dimensions);

    int firstRow = 0;
    int secondRow = 0;
    for (int i = 0; i < (dimensions * dimensions); i++) {
        cin >> matrix[i];
    }
    for (int i = 0; i < dimensions; i++) {
        firstRow += matrix[i + (i * dimensions)];
        secondRow+= matrix[dimensions - i-1 + (i * dimensions)];
    }

    
    if (firstRow < secondRow) {
        cout << (secondRow - firstRow);
    }
    else {
        cout << (firstRow - secondRow);
    }
    
    return 0;
}

