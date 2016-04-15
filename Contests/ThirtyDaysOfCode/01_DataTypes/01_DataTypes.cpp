#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string digits = "1234567890";

bool isChar(string possibleChar) {
    return ((possibleChar.length() == 3) && (possibleChar[0] == '\'') && (possibleChar[2] == '\''));
}

bool isString(string possibleString) {
    int length = possibleString.length();
    return ((possibleString[0] == '"') && (possibleString[length - 1] == '"'));
}
            
bool isInt(string possibleInt) {
    for (int i = 0; i < possibleInt.length(); i++) {
        bool isDigit = false;
        for (int j = 0; j < digits.length(); j++) {
            if (possibleInt[i] == digits[j]) {
                isDigit = true;
                break;
            }
        }
        if (!isDigit) {return false;}
    }
    return true;
}
            
bool isDouble(string possibleDouble) {
    int points = 0;
    for (int i = 0; i < possibleDouble.length(); i++) {
        bool isDigitOrPoint = false;
        if (possibleDouble[i] == '.') {
            points++;
            isDigitOrPoint = true;
        }
        for (int j = 0; j < digits.length(); j++) {

            if (possibleDouble[i] == digits[j]) {
                isDigitOrPoint = true;
                break;
            }
        }
        if (!isDigitOrPoint) {return false;}
    }
    return (points == 1);
}
            
bool isBoolean(string input) {
    return ((input == "true") || (input == "false"));
}

bool isNull(string input) {
    return (input.length() == 0);
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int input = 9;
    for (int i = 0; i < 9; i++) {
        string line;
        getline(cin, line);
        // cout << "Input: " << line << endl;
        if(isNull(line)) {cout << "Null\n";}
        else if(isBoolean(line)) {cout << "Primitive : boolean\n";}
        else if(isChar(line)) {cout << "Primitive : char\n";}
        else if(isString(line)) {cout << "Referenced : string\n";}
        else if(isInt(line)) {cout << "Primitive : int\n";}
        else if(isDouble(line)) {cout << "Primitive : double\n";}
    }
    
    return 0;
}
