#include <bits/stdc++.h>
 
using namespace std;
 
int entrada, translate, translate1, translate2;
 
int main() {
    cin >> entrada;
    translate =  entrada/ 1000000;
    translate1 = (entrada - (translate * 1000000)) / 10000;
    translate2 = (entrada - (translate * 1000000)) - (translate1 * 10000);
    int data, mes , ano;
    data = translate;
    mes = translate1;
    ano = translate2;
    
    if(mes <= 12 && mes >= 1){
        switch(mes) {
            case 1:
                if(data <= 31){
                    cout << data << " de janeiro de " << ano << endl;
                }else {
                    cout << "Data invalida!" << endl;
                }
                break;
            case 2:
                if(data <= 28) {
                    cout << data << " de fevereiro de " << ano << endl;
                }else {
                    cout << "Data invalida!" << endl;
                }
                break;
            case 3:
                if(data <= 31) {
                    cout << data << " de março de " << ano << endl;
                }else {
                    cout << "Data invalida!" << endl;
                }
                break;
            case 4:
                if(data <= 30) {
                    cout << data << " de abril de " << ano << endl;
                }else {
                    cout << "Data invalida!" << endl;
                }
                break;
            case 5:
                if(data <= 31) {
                    cout << data << " de maio de " << ano << endl;
                }else {
                    cout << "Data invalida!" << endl;
                }
                break;
            case 6:
                if(data <= 30) {
                    cout << data << " de junho de " << ano << endl;
                }else {
                    cout << "Data invalida!" << endl;
                }
                break;
            case 7:
                if(data <= 31) {
                    cout << data << " de julho de " << ano << endl;
                }else {
                    cout << "Data invalida!" << endl;
                }
                break;
            case 8:
                if(data <= 31) {
                    cout << data << " de agosto de " << ano << endl;
                }else {
                    cout << "Data invalida!" << endl;
                }
                break;
            case 9:
                if(data <= 30) {
                    cout << data << " de setembro de " << ano << endl;
                }else {
                    cout << "Data invalida!" << endl;
                }
                break;
            case 10:
                if(data <= 31) {
                    cout << data << " de outubro de " << ano << endl;
                }else {
                    cout << "Data invalida!" << endl;
                }
                break;
            case 11:
                if(data <= 30) {
                    cout << data << " de novembro de " << ano << endl;
                }else {
                    cout << "Data invalida!" << endl;
                }
                break;
            case 12:
                if(data <= 31) {
                    cout << data << " de dezembro de " << ano << endl;
                }else {
                    cout << "Data invalida!" << endl;
                }
                break;
                
        }
    }else {
        cout << "Data invalida!" << endl;
    }
    
    return 0;
}
