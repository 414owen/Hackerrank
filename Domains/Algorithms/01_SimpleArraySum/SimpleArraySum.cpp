#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
	cin >> n;
    int sum = 0;
	int array[n];
    for (n; n >0; n--) {
        cin >> array[n];
		sum += array[n];
	}
	cout << sum << endl;
    return 0;
}
