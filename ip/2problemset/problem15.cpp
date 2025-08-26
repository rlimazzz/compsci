#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    string n1, n2;
    cin >> n1;
    for(int i = n1.size() -1;i >= 0;i--) {
        n2 += n1[i];
    }
    if(n1.size() > 5) {
        cout << "NUMERO INVALIDO" << endl;
    }else {
        if(n1 == n2) {
            cout << "PALINDROMO" << endl;
        }else {
            cout << "NAO PALINDROMO" << endl;
        }
    }
    
    return 0;
}
