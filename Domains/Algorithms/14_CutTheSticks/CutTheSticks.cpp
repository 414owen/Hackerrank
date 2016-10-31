#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int cutsticks(vector<int> sticks);

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int sticks;
    cin >> sticks;
    int sticklengths[1001] = {0};
    for (int i = 0; i < sticks; i++) {
        int length;
        cin >> length;
        sticklengths[i] = length;
       // cout << "recorded " << sticklengths[i];
    }
    
    int newsticks = sticks;
    while (newsticks > 0) {
        cout << newsticks << endl;
        
        int greatest = 0;
        for (int i = 0; i < sticks; i++) {
            if (greatest < sticklengths[i]) {
                greatest = sticklengths[i];
            }
        }
        
        int smallest = greatest;
        for (int i = 0; i < sticks; i++) {
            if ((sticklengths[i] < smallest) && (sticklengths[i] > 0)){
                smallest = sticklengths[i];
            }
        }
       // cout << "smallest is: " << smallest;
        for (int i = 0; i < sticks; i++) {
            if (sticklengths[i] > 0) {
                sticklengths[i] -= smallest;
               // cout << i << " becomes " << sticklengths[i];
                if (sticklengths[i] <= 0) {
                     newsticks -= 1;
                }
            }
        }

    }
    return 0;
}
