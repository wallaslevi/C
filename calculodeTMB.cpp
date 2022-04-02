#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

char opc;
string hm;
float peso,altura,tmb,kcal,kcaltotal;
int idade;


int main(){


cout<<setprecision(2)<<fixed;

cout<<"\ncalculo de taxa metabolica basal TMB\n";
cout<<"\nTMB e a quantidade de energia necessaria para a manutencao das funcoes vitais do organismo ao longo de 24 horas. ela e medida em calorias, que e a energia extraida pelo nosso corpo a partir dos macronutrientes (carboidratos, proteinas e gorduras totais)\n\n";


inicio:
	
cout<<"\nO calculo sera para homem ou mulher?\n";
cin>> hm;

if(hm=="HOMEM" or hm=="homem"){

cout<<"\ninforme seu peso em quilos, kg\n";
cin>>peso;

cout<<"\ninforme sua altura em centimetros, cm\n";
cin>>altura;

cout<<"\ninforme dua idade\n";
cin>>idade;

tmb=(66+(13.7*peso)+(5.0*altura)-(6.8*idade));

cout<<"\nSua taxa metabolica basal e de :\n"<<tmb<< endl;

}else if(hm=="mulher" or hm=="MULHER"){

cout<<"\ninforme seu peso em quilos, kg\n";
cin>>peso;

cout<<"\ninforme sua altura em centimetros, cm\n";
cin>>altura;

cout<<"\ninforme sua idade\n";
cin>>idade;

tmb=(665+(9.6*peso)+(1.8*altura)-(4.7*idade));

cout<<"\nSua taxa metabolica basal e de:\n"<<tmb<<endl;

}else{


cout<<"\nvoce digitou algum valor incorreto, vamos recomecar\n"; goto inicio;


}


cout<<"\nagora que calculamos a taxa metabolica basal, que e as calorias que nosso corpo precisa pra manter as energias diariamente de simples atividades, vamos adicionar o gasto calorico de treino que varia entre 300 a 500 calorias\n";

cout<<"\nquanto voce acredita que gasta de calorias no treino?\n";
cin>>kcal;

kcaltotal=tmb+kcal;

cout<<"\nseu gasto total de calorias e de:\n"<<kcaltotal<<endl;

cout<<"\ndeseja realizar nova consulta?[S/N]\n";
cin>>opc;

if(opc=='s' or opc=='S'){
goto inicio;

}

return 0;
}