#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int tam, somatoria = 0;
    cin >> tam;
    for(int i = 0;i < tam;i++) {
        int entr;
        cin >> entr;
        somatoria += entr;
    }
    cout << somatoria << endl;
 
    return 0;
}
