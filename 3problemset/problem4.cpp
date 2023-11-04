#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int tam;
    vector<int> meuvet;
    cin >> tam;
    for(int i = 0;i < tam;i++){
        int k;
        cin >> k;
        meuvet.push_back(k);
    }
    for(int k = 0;k < tam;k++) {
        cout << meuvet[k] << " ";
    }
    cout << endl;
    return 0;
}
