#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k;
    cin >> k;
    
    for (int i = 0; i < s.length(); i++) {
        //cout << "i++";
        for (int j = 0; j < k; j++) {
            if ((s[i] >= 'a') && (s[i] <= 'z')) {
                if ((s[i] + 1) <= 'z') {
                    s[i] += 1;
                }
                else {
                    s[i] = 'a';
                }
            }
            else if ((s[i] >= 'A') && (s[i] <= 'Z')) {
                if (s[i] + 1 <= 'Z') {
                    s[i] += 1;
                }
                else {
                    s[i] = 'A';
                }
            }
        } 
    }
    cout << s;
return 0;

}
