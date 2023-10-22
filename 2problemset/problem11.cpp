#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    cout << fixed << setprecision(2);
    double a, b, c, delta = 0, total = 0, total2 = 0;
    cin >> a >> b >> c;
    delta = (b * b) - (4 * a * c);
    if(delta < 0){
        cout << "RAIZES IMAGINARIAS" << endl;
    }
    else if(delta == 0){
        cout << "RAIZ UNICA" << endl;
        total = (b * -1) / (2 * a);
        
        cout << "X1 = " <<  total << endl;
    }else {
        cout << "RAIZES DISTINTAS" << endl;
        total = ((b * -1) - sqrt(delta)) / (2 * a);
        total2 = ((b * -1) + sqrt(delta)) / (2 * a);
        if(total > total2) {
            cout << "X1 = " << total2 << endl;
            cout << "X2 = " << total << endl;
        }else {
            cout << "X1 = " << total << endl;
            cout << "X2 = " << total2 << endl;
        }
    }
    
    return 0;
}
