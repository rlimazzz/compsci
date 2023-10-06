#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int cedulas[4] = {100, 50 , 10 , 1};
    int entrada, contador = 0;
    cin >> entrada;
    while(entrada > 0){
        if(entrada >= 100){
            cout << "NOTAS DE 100 = " << entrada / cedulas[contador] << endl;
            entrada = entrada % cedulas[contador];
            contador++;
        }
        else if(entrada >= 50 && entrada < 100) {
            cout << "NOTAS DE 50 = " << entrada / cedulas[contador] << endl;
            entrada = entrada % cedulas[contador];
            contador++;
        }
        else if(entrada >= 10 && entrada < 50) {
            cout << "NOTAS DE 10 = " << entrada / cedulas[contador] << endl;
            entrada = entrada % cedulas[contador];
            contador++;
        }else{
            cout << "MOEDAS DE 1 = " << entrada / cedulas[contador] << endl;
            entrada = entrada % cedulas[contador];
        }
    }
    return 0;
}
