#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    cout << fixed << setprecision(2);
    vector<double> entrada;
    double n;
    for(int i = 0; i < 3 ;i++) {
        cin >> n;
        entrada.push_back(n);
    }
    sort(entrada.begin(), entrada.end());
    cout << entrada[0] << ", " << entrada[1] << ", " << entrada[2] << endl;
    return 0;
}
