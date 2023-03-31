#include <iostream>

using namespace std;

main() {

	setlocale(LC_ALL, "Portuguese");

	int opcaoMenu = 0;
	double pesoUsuario;
	double alturaUsuario;
	double imcIndice;
	
	double tamanhoUsuario;
	string sexoUsuario;
	
	do{
		cout<<"\n\n\n\n\t\t\t\t >>>> Este programa vai usar sua altura e peso <<<<";
		cout<<"\n\n\n\t 1_ Programa para comparar sua altura com a m�dia nacional";
		cout<<"\n\n\t 2_ Programa para calcular seu �ndice de Massa Corporal (IMC)";
		cout<<"\n\n\t 0_ Sair do programa";
		cout<<"\n\n\t Digite o n�mero da op��o desejada";
		    cin>>opcaoMenu;
	
		switch(opcaoMenu) {
			case 1: 
				cout<<"\n\n\t Voc� � homem ou mulher (responda com h ou m)?";
				cin>> sexoUsuario;
				cout<<"\n\n\t Qual � sua altura?";
				cin>> tamanhoUsuario;
				
				if (sexoUsuario == "h"){
					if (tamanhoUsuario < 1.72){
						cout<<"Sua alturaa est� abaixo da m�dia";
					}
					if (tamanhoUsuario == 1.72){
						cout<<"Sua altura est� na m�dia";	
					}
					if (tamanhoUsuario > 1.72){
						cout<<"Sua altura est� acima da m�dia";	
					}
				}
				
				if (sexoUsuario == "m"){
					if (tamanhoUsuario < 1.61){
						cout<<"Sua altura est� abaixo da m�dia";
					}
					if (tamanhoUsuario == 1.61){
						cout<<"Sua altura est� na m�dia";	
					}
					if (tamanhoUsuario > 1.61){
						cout<<"Sua altura est� acima da m�dia";	
					}
				}
				
			break;
			case 2:
	
				cout<<"\n\n\t Qual � seu peso?";
				cin>> pesoUsuario;
				cout<<"\n\n\t Qual � sua altura?";
				cin>> alturaUsuario;
	
				imcIndice = pesoUsuario / (alturaUsuario * alturaUsuario);
	
				cout<<"\n\n\t Este � o seu IMC: "<<imcIndice;
	
				if (imcIndice < 18.5) {
					cout<<"\n\n\t Seu �ndice abaixo do peso ideal";
				}
	
				if((imcIndice >= 18.5) && (imcIndice <= 24.9 )) {
					cout<<"\n\n\t Seu �ndice est� no peso ideal";
				}
	
				if((imcIndice >= 25) && (imcIndice <= 29.9)) {
					cout<<"\n\n\t Seu �ndice est� acima do peso ideal";
				}
	
				if((imcIndice >= 30) && (imcIndice <= 34.9)) {
					cout<<"\n\n\t Seu �ndice caracteriza Obesidade Tipo I";
				}
	
				if((imcIndice >= 35) && (imcIndice <= 39.9)) {
					cout<<"\n\n\t Seu �ndice caracteriza Obesidade Tipo II";
				}
	
				if (imcIndice > 40) {
					cout<<"\n\n\t Seu �ndice caracteriza Obesidade M�rbida";
				}
			
			break;
			case 0:
				cout<<"\n\n\t At� logo!";
				
			break;
		}
	}while(opcaoMenu != 0 );
}

