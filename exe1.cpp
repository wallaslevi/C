#include <iostream>
#include <cstdlib>

using namespace std;

double argamassa=0.01;
double alturatijolo,comprimentotijolo,alturaparede,comprimentoparede,areaparede=0;
int quantidadetijolo=0;
char opc;

int main(){


cout<<"ola\n vamos interagir um pouco?!\n\n";

inicio:

cout<<"informe a altura desejada da parede\n";
cin>> alturaparede;

cout<<"informe o comprimento desejado da parede\n";
cin>>comprimentoparede;

areaparede= alturaparede*comprimentoparede;
cout<<"a area da parede e:" <<areaparede<< endl;

cout<<"informe a altura do tijolo\n\n";
cin>>alturatijolo;

cout<<"informe comprimento do tijolo\n\n";
cin>>comprimentotijolo;

quantidadetijolo=((areaparede)/((alturatijolo+argamassa)*(comprimentotijolo+argamassa)));

cout<<"a quantidade de tijolos necessario para parede e de:\n\n"<<quantidadetijolo<< endl;

cout<<"\ndeseja realizar nova consulta?[S/N]";
cin>>opc;

if(opc=='S' or opc=='s'){
goto inicio;

}

return 0;

}