#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    vector<int> entr;
    vector<int> resp;
    for(int i = 0; i < 3;i++) {
        int n;
        cin >> n;
        entr.push_back(n);
    }
    sort(entr.rbegin(), entr.rend());
    for(int k = 0; k < 3;k++) {
        char o;
        cin >> o;
        if(o == 'A') {
            resp.push_back(entr[2]);
        }
        else if(o == 'B') {
            resp.push_back(entr[1]);
        }else {
            resp.push_back(entr[0]);
        }
        
    }
    for(int i = 0;i < 3; i++) {
        if(i + 1 != 3){
            cout << resp[i] << " ";
        }else{
            cout << resp[i] << endl;
        }
    }
    return 0;
} ;
