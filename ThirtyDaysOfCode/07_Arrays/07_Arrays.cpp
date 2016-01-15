#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    
    for(int j = 0; j < (arr.size() / 2); j++) {
        int temp = arr[j];
        arr[j] = arr[arr.size() - j - 1];
        arr[arr.size() - j - 1] = temp;
    }
    
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
        
    return 0;
}

