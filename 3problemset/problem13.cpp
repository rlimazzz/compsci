#include <bits/stdc++.h>
 
using namespace std;
 
int numeros[101];
int main() {
    int n, maior = 0;
    vector<int> iguais;
    cin >> n;
    for(int i = 0;i < n;i++) {
        int entr;
        cin >> entr;
        numeros[entr] += 1;
        maior = max(maior , entr);
    }
 
    int maior_indice = 0;
    for(int i = 0;i <= maior;i++) {
        maior_indice = max(maior_indice, numeros[i]);
    }
    for(int i = 0;i <= maior;i++) {
        if(numeros[i] == maior_indice) {
            iguais.push_back(i);
        }
    }
    sort(iguais.begin(), iguais.end());
    cout << iguais[0] << endl;
    cout << maior_indice << endl;
    return 0;
}
