#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    vector<int> entradas;
    int n, c;
    cin >> n;
    for(int i = 0;i < n;i++){
        int k;
        cin >> k;
        entradas.push_back(k);
    }
    cin >> c;
    for(int i =0;i < c;i++) {
        int h, contador = 0;
        cin >> h;
        for(int k = 0; k < n;k++){
            if(entradas[k] == h) {
                contador++;
            }
        }
        if(contador > 0) {
            cout << "ACHEI" << endl;
        }else {
            cout << "NAO ACHEI" << endl;
        }
    }
    return 0;
}
