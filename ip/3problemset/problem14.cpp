#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    cout << fixed << setprecision(2);
    vector<double> entradas;
    int n;
    cin >> n;
    for(int i = 0;i < n;i++) {
        double k;
        cin >> k;
        entradas.push_back(k);
    }
    sort(entradas.begin(), entradas.end());
    double mediana = 0;
    if(n % 2 == 0) {
        mediana = (entradas[(n/2) - 1] + entradas[n / 2]) / 2;
    }else {
        mediana = entradas[n /2];
    }
    cout << mediana << endl;
    return 0;
}
