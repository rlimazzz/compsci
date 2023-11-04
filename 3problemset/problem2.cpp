#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n, tam, va;
    vector<int> lista;
    cin >> n;
    while(true) {
        if(n < 1 || n > 1000) {
            cin >> n;
        }else {
            tam = n;
            break;
        }
    }
    for(int i = 0;i < tam;i++) {
        int entr;
        cin >> entr;
        lista.push_back(entr);
    }
    int numero, contador = 0;
    cin >> numero;
    for(int i = 0;i < tam;i++) {
        if(numero <= lista[i]) {
            contador++;
        }
    }
    cout << contador << endl;
    return 0;
}
