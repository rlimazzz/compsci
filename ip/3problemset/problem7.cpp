#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    while(true) {
        pair<int, int> maior;
        int x;
        cin >> x;
        if(x == 0) {
            break;
        }else {
            vector<int> numeros;
            int maior = 0;
            for(int i = 0;i < x;i++) {
                int k;
                cin >> k;
                numeros.push_back(k);
                maior = max(maior, k);
            }
            for(int i = 0;i <= maior;i++) {
                int contador = 0;
                for(int v = 0; v < (int)numeros.size();v++) {
                    if(numeros[v] <= i) {
                        contador++;
                    }
                }
                cout << "(" << i << ") " << contador << endl; 
            }
        }
    }
    return 0;
}
