#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<long> fibs = {1, 2};

vector<long> listOfFibsToLimit(long limit) {
    if (fibs.back() > limit) {
        return fibs;
    }
    else {
        long fibOne = fibs.rbegin()[1];
        long fibTwo = fibs.rbegin()[0];
        long lastFib = 0;
        for (long i = 0; lastFib < limit; i++) {
            if (i % 2 == 0) {
                fibOne += fibTwo;
                lastFib = fibOne;
            }
            else {
                fibTwo += fibOne;
                lastFib = fibTwo;
            }
            //cout << "lastfib: " << lastFib << endl;
            if (lastFib < limit) {
                fibs.push_back(lastFib);
            }
        }
        return fibs;
    }
}

long sumOfEvenFibs(long limit) {
    vector<long> fibs = listOfFibsToLimit(limit);
    long sum = 0;
    for(long i: fibs) {
        if ((i %2 == 0) && (i < limit)) {
            sum += i;
        }
    }
    //cout << "sum: " << sum << endl;
    return sum;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long cases;
    cin >> cases;
    //cout << "Cases: " << cases << endl;
    for (long i = 0; i < cases; i++) {
        long currentCase;
        cin >> currentCase;
        //out << "Current case: " << currentCase << endl;
        long answer = sumOfEvenFibs(currentCase);
        cout << answer << endl;
    }
    return 0;
}
