#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    cout << fixed << setprecision(1);
    double a , b , c, mod = 0, mod2 = 0, mod3 = 0, area = 0;
    cin >> a >> b >> c;
    if(b - c < 0 ) {
        mod = (b - c) * -1;    
    }
    if(a - c < 0 ) {
        mod2 = (a - c) * -1;
    }
    if(a - b < 0) {
        mod3 = (a - b) * -1;
    } 
    area = ((a + b) * c) / 2;
    if((mod < a && a < b + c) && (mod2 < b && b < a + c) && (mod3 < c && c < a + b)) {
        cout << "Perimetro = " << a + b + c << endl;
    }else {
        cout << "Area = " << area << endl;
    }
    return 0;
}
