#include <bits/stdc++.h>
 
using namespace std;
 
typedef vector<int> vi;
typedef pair<int, int> pii;
 
int main() {
    int n;
    vi orden;
    cin >> n;
    for(int i = 0;i < n;i++) {
        int entr;
        cin >> entr;
        orden.push_back(entr);
    }
    sort(orden.begin(), orden.end());
 
    for(int k = 0;k < n;k++) {
        cout << orden[k] << endl;
    }
    return 0;
}
