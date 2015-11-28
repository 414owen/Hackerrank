#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    //Fill in alphabet
    char alphabet[26];
    for (int i = 0; i < 26; i++) {
        alphabet[i] = ((char) ('a' + i));
    }
    
    char alphabetCaps[26];
    for (int i = 0; i < 26; i++) {
        alphabetCaps[i] = ((char) ('A' + i));
    }
    
    //cout << alphabet;
    
    string input;
    getline(cin, input);
    
    for (int i = 0; i < input.length(); i++) {
        for (int j = 0; j < 26; j++) {
            //char alphabetChar = (char) alphabet[j];
            //char inputChar = input[i];
            if (input[i] == alphabet[j]) {
                alphabet[j] = '0';
            }
            if (input[i] == alphabetCaps[j]) {
                alphabetCaps[j] = '0';
            }    
        }
    }
    
    //cout << alphabet << endl;
    //cout << alphabetCaps << endl;

    
    bool pangram = true;
    for (int i = 0; i < 26; i++) {
        if ((alphabet[i] != '0') && (alphabetCaps[i] != '0')) {
            pangram = false;
        }
    }
    
    if (pangram) {
        cout << "pangram";
    }
    else {
        cout << "not pangram";
    }
        
    return 0;
}

