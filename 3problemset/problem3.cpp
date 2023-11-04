#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int tam;
    vector<int> meuvet;
    vector<int> reverse;
    cin >> tam;
    for(int i = 0;i < tam;i++){
        int k;
        cin >> k;
        meuvet.push_back(k);
    }
    for(int k = (int)meuvet.size() -1;k >= 0;k--) {
        cout << meuvet[k] << " ";
    }
    cout << endl;
    return 0;
}
