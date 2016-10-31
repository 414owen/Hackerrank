#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int testCases;
    cin >> testCases;
    for (int i = 0; i < testCases; i++) {
        int students = 0;
        cin >> students;
        int minStudents = 0;
        cin >> minStudents;
        int studentsOnTime = 0;
        for (int j = 0; j < students; j++) {
            int test = 0;
            cin >> test;
            if (test <= 0) {
                studentsOnTime++;
               // cout << "true";
            }
           // else {cout << "False";}
        }
        if (studentsOnTime >= minStudents) {
            cout << "NO" << endl;
            
        }
        else {
            cout << "YES" << endl;
        }
        //cout << " " << studentsOnTime << " " << minStudents;
    }

    
    return 0;
}

