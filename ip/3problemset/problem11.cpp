#include <bits/stdc++.h>
 
using namespace std;
 
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef long long ll;
typedef double long dl;
 
int matr[10001];
int main() {
    int n, maior = 0;
    vector<int> entr;
    vector<int> reverse;
    cin >> n;
    for(int i = 0;i < n;i++){
        int m;
        cin >> m;
        entr.push_back(m);
        maior = max(maior, m);
    }
    for(int k = n - 1;k >= 0;k--) {
        reverse.push_back(entr[k]);
    }
    for(int j = 0;j < n;j++) {
        cout << entr[j] << " ";
    }
    cout << endl;
    for(int i = 0; i < n;i++) {
        cout << reverse[i] << " ";
    }
    cout << endl;
    cout << maior << endl;
    sort(entr.begin(), entr.end());
    cout << entr[0] << endl;
    return 0;
}
