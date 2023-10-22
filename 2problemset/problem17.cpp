#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    cout << fixed << setprecision(2);
    vector<double> entrada;
    for(int i = 0;i < 4;i++) {
        double entr;
        cin >> entr;
        entrada.push_back(entr);
    }
    sort(entrada.begin(), entrada.end());
    for(int i = 0; i< 4;i++) {
        if(i + 1 != 4){
            cout << entrada[i] << ", ";
        }else {
            cout << entrada[i] <<endl;
        }
    }
    
    return 0;
}
