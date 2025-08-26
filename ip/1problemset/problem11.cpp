#include <bits/stdc++.h>
 
using namespace std;
 
string entrada;
 
int main(){
    string n;
    cin >> n;
    for(int i = n.size() - 1;i >= 0; i--) {
        entrada += n[i];
    }
    cout << entrada << endl;
    return 0;
}
