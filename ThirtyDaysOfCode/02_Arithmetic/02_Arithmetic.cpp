#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
    double price;
    double tip, tax;
    cin >> price >> tip >> tax;
    double tipValue = (price/100) * tip;
    double taxValue = (price/100) * tax;
    cout << "The final price of the meal is $" << (int) round(price + tipValue + taxValue) << "." << endl;
    return 0;
}

