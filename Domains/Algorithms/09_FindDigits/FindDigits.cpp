#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int numbers;
    cin >> numbers;
    for (int i = 0; i < numbers; i++) {
        long number;
        cin >> number;
        int copy = number;
      //  cout << "number: "<< number << endl;
        
        int divisors = 0;
        while (number != 0) {
            int digit;
            digit = (number % 10);
            // cout << "now";
         	//   cout << "digit: " << digit << endl;
            if ((digit != 0) && ((copy % digit) == 0)) {
            	//   cout << (copy % digit == 0) << endl;
            	//  cout <<number << " " << (number % digit) << endl;

                divisors++;
                //cout << digit << "added one" << endl;
            }
            number /= 10;
           //             cout << "here";

        }
        cout << divisors << endl;
    }
    return 0;
}
