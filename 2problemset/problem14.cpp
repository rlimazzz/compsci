#include <bits/stdc++.h>
 
using namespace std;
 
int matricula, dependentes;
double salariomin, salario, taxa, impbruto, impliq, resultado = 0;
 
int main() {
    cout << fixed << setprecision(2);
    cin >> matricula >> salariomin >> dependentes >> salario >> taxa;
    if(salario > salariomin * 12) {
        impbruto = (0.2 * salario);
    }
    else if(salario > salariomin * 5) {
        impbruto = (0.08 * salario);
    }else {
        impbruto = 0;
    }
    impliq = impbruto - (300 * dependentes);
    resultado = impliq - (salario * (taxa/100));
    if(resultado < 0) {
        cout << "MATRICULA = " << matricula << "\nIMPOSTO BRUTO = " << impbruto << "\nIMPOSTO LIQUIDO = " << impliq << "\nRESULTADO = " << resultado << "\nIMPOSTO A RECEBER" << endl;
    }
    else if(resultado == 0) {
        cout << "MATRICULA = " << matricula << "\nIMPOSTO BRUTO = " << impbruto << "\nIMPOSTO LIQUIDO = " << impliq << "\nRESULTADO = " << resultado << "\nIMPOSTO QUITADO" << endl;
    }else {
        cout << "MATRICULA = " << matricula << "\nIMPOSTO BRUTO = " << impbruto << "\nIMPOSTO LIQUIDO = " << impliq << "\nRESULTADO = " << resultado << "\nIMPOSTO A PAGAR" << endl;
    }
    return 0;
}
