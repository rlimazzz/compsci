#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n, maior = 0, ultimo = 0, contadorultimo=0;
    vector<int> valores;
    cin >> n;
    for(int i = 0;i < n;i++) {
        int entr;
        cin >> entr;
        maior = max(maior, entr);
        if(i + 1 != n) {
            valores.push_back(entr);
        }else {
            valores.push_back(entr);
            ultimo = entr;
        }
    }
    int contador = 0, indice = 0;
    for(int i = 0;i < (int)valores.size();i++) {
        if(valores[i] == ultimo) {
            contadorultimo++;
        }
        if(valores[i] == maior && contador == 0) {
            contador++;
            indice = i;
        }
    }
    cout << "Nota " << ultimo << ", "<< contadorultimo << " vezes" << endl;
    cout << "Nota " << maior << ", indice " << indice << endl; 
    return 0;
}
