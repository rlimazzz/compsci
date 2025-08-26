#include <bits/stdc++.h>
 
using namespace std;
 
bool t1 , t2 , t3;
int main() {
    int n;
    for(int i = 1;i <= 3;i++) {
        cin >> n;
        if(i == 1) {
            if(n < 7) {
                t1 = true;
            }else {
                t1 = false;
            }
        }
        else if(i == 2){
            if(n > 50) {
                t2 = true;
            }else {
                t2 = false;
            }
        }else {
            if(n > 80000) {
                t3 = true;
            }else {
                t3 = false;
            }
        }
    }
    if(t1 == true && t2 == true && t3 == true) {
        cout << "ACO DE GRAU = 10" << endl;
    }
    else if(t1 == true && t2 == true) {
        cout << "ACO DE GRAU = 9" << endl;
    }
    else if(t1 == true) {
        cout << "ACO DE GRAU = 8" << endl;
    }else{
        cout << "ACO DE GRAU = 7" << endl;
    }
    
    return 0;
}
