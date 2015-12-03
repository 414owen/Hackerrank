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
    vector<int> caseList;
    for (int i = 0; i < cases; i++) {
        long currentCase = 0;
        cin >> currentCase;
        caseList.push_back(currentCase);
    }
    
    for (auto i: caseList) {
        long sumOfMultiples = 0;
        long divThree = (i-1)/3;
        sumOfMultiples += 3*(divThree*(divThree+1))/2;
        long divFive = (i-1)/5;
        sumOfMultiples += 5*(divFive*(divFive+1))/2;
        long divFifteen = (i-1)/15;
        sumOfMultiples -= 15*(divFifteen*(divFifteen+1))/2;
        cout << sumOfMultiples << endl;
    }

    return 0;
}
