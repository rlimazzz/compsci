#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int k;
    while(cin >> k) {
        vector<int> transform;
        while(true) {
            if(k / 2 == 0) {
                transform.push_back(k);
                break;
            }else {
                transform.push_back(k % 2);
                k /= 2;
        }
        }
        for(int j = (int)transform.size() - 1;j >= 0;j--) {
            cout << transform[j];
        } 
        cout << endl;
    }
    return 0;
}
