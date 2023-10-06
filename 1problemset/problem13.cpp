#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    cout << fixed << setprecision(2);
    double a , b , c , d , e , f, y , x;
    cin >> a >> b >> c >> d >> e >> f;
    y = ((a * f) - (d * c)) / ((a * e) - (d * b));
    x = (c - (b * y)) / a;
    cout << "O VALOR DE X E = " << x << endl;
    cout << "O VALOR DE Y E = " << y << endl;
    return 0;
}
