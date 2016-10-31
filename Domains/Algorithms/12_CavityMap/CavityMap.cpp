#include <iostream>

using namespace std;
    
    
bool isCavity(char matrix[101][101], int i, int j) {
    char currentCharacter = matrix[i][j];
    if (matrix[i-1][j] >= currentCharacter) {
        return false;
    }
    if (matrix[i+1][j] >= currentCharacter) {
        return false;
    }
    
    if (matrix[i][j-1] >= currentCharacter) {
        return false;
    }
    if (matrix[i][j+1] >= currentCharacter) {
        return false;
    }
    return true;
}


int main(){
    int n;
    cin >> n;
    char matrix[101][101];
    for(int i = 0; i < n; i++) {
       for (int j = 0; j < n; j++) {
           cin >> matrix[i][j];
       }
    }
    
    for(int i = 0; i < n; i++) {
       for (int j = 0; j < n; j++) {
           char currentCharacter = matrix[i][j];
           if ((i == 0) || (i == (n - 1)) || (j == 0) || (j == (n - 1))) {
                cout << currentCharacter;
           }
           
           else if (isCavity(matrix, i, j)) {
            
                cout << "X";
           }

           else {
                cout << currentCharacter;
           }
       }
        cout << endl;
    }
    return 0;
}

