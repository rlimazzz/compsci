#include <bits/stdc++.h>
 
using namespace std;
 
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef long long ll;
typedef double long dl;
 
struct Pontos {
    double x , y , z;
};
 
 
int main() {
    int n;
    cout << fixed << setprecision(2);
    vector<Pontos> calc;
    cin >> n;
    for(int i = 0;i < n;i++) {
        double a , b , c;
        cin >> a >> b >> c;
        Pontos entr;
        entr.x = a;
        entr.y = b;
        entr.z = c;
        calc.push_back(entr);
    }
    for(int k = 0; k < n - 1;k++) {
        double operation = 0, solve;
        operation = pow(calc[k].x - calc[k + 1].x, 2) + pow(calc[k].y - calc[k + 1].y, 2) + pow(calc[k].z - calc[k + 1].z, 2);
        solve = sqrt(operation);
        cout << solve << endl;
    }
    return 0;
}
