#include <iostream>
#include <array>
using namespace std;

int hourglass_sum(array<array<int, 6>, 6> matrix, int i, int j) {
    int size = matrix[i][j] + matrix[i+1][j] + matrix[i+2][j]; //Top
    size += matrix[i+1][j+1]; //Middle
    size += matrix[i][j+2] + matrix[i+1][j+2] + matrix[i+2][j+2]; //Bottom
    return size;
}

int max_hourglass_sum(array<array<int, 6>, 6> matrix) {
    int max_size = -1000;
    for (int i = 0; i < matrix.size() - 2; i++) {
        for (int j = 0; j < matrix[0].size() - 2; j++) {
            int size = hourglass_sum(matrix, i, j);
            if (size > max_size) {max_size = size;}
        }
    }
    return max_size;
}

int main(){
    array<array<int, 6>, 6> arr;
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_j][arr_i];
       }
    }
    cout << max_hourglass_sum(arr) << endl;

    return 0;
}