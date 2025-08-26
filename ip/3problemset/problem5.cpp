#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int tam;
    while(true) {
        cin >> tam;
        if(tam == 0) {
            break;
        }else {
            int maior = 0;
            vector<int> entrada;
            for(int i = 0; i < tam;i++) {
                int k;
                cin >> k;
                entrada.push_back(k);
                maior = max(maior, k);
            }
            for(int j = 0;j < tam;j++) {
                if(entrada[j] == maior) {
                    cout << j << " " << maior << endl;
                    break;
                }
            }
 
        }
    }
    return 0;
}
