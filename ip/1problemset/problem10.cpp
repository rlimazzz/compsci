#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    string entrada;
    int calculo = 0;
    cin >> entrada;
    calculo = ((entrada[0] - '0') + (entrada[1] - '0') * 3 + (entrada[2] - '0') * 5) % 7;
    entrada += calculo + '0';
    cout << "O NOVO NUMERO E = " << entrada << endl;
    
    return 0;
}
