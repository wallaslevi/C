#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

float altura,peso,imc;
char opc;

int main(){

cout<<setprecision(2)<< fixed;

cout<<"\nCalculo de IMC\n";

inicio:

cout<<"informe sua altura com apenas 3 algoritmos em metros, utilize ponto\n";
cin>>altura;

cout<<"\ninforme seu peso com 4 algoritmos em kg\n";
cin>>peso;

imc = (peso / (altura * altura));

cout<<"\nSeu IMC e de:"<<imc<< endl;

if(imc<18.5){
    cout<<"sua classificacao e de uma pessoa MAGRA";
}else if(imc==18.5 or imc<=24.9){
    cout<<"sua classificacao e de uma pessoa NORMAL";
}else if(imc==25.0 or imc<=29.9){
    cout<<"sua classificacao e de uma pessoa com SOBREPESO";
}else if(imc==30.0 or imc<=39.9){
    cout<<"sua classificacao e de uma pessoa com OBESIDADE";
}else{
    cout<<"sua classificacao e de uma pessoa com OBESIDADE GRAVE";
}

cout<<"\ndeseja realizar nova consulta?[S/N]\n";
cin>>opc;

if(opc=='s' or opc=='S'){
    goto inicio;
}

return 0;

}
