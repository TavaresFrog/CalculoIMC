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
		cout<<"\n\n\n\t 1_ Programa para comparar sua altura com a média nacional";
		cout<<"\n\n\t 2_ Programa para calcular seu Índice de Massa Corporal (IMC)";
		cout<<"\n\n\t 0_ Sair do programa";
		cout<<"\n\n\t Digite o número da opção desejada";
		    cin>>opcaoMenu;
	
		switch(opcaoMenu) {
			case 1: 
				cout<<"\n\n\t Você é homem ou mulher (responda com h ou m)?";
				cin>> sexoUsuario;
				cout<<"\n\n\t Qual é sua altura?";
				cin>> tamanhoUsuario;
				
				if (sexoUsuario == "h"){
					if (tamanhoUsuario < 1.72){
						cout<<"Sua alturaa está abaixo da média";
					}
					if (tamanhoUsuario == 1.72){
						cout<<"Sua altura está na média";	
					}
					if (tamanhoUsuario > 1.72){
						cout<<"Sua altura está acima da média";	
					}
				}
				
				if (sexoUsuario == "m"){
					if (tamanhoUsuario < 1.61){
						cout<<"Sua altura está abaixo da média";
					}
					if (tamanhoUsuario == 1.61){
						cout<<"Sua altura está na média";	
					}
					if (tamanhoUsuario > 1.61){
						cout<<"Sua altura está acima da média";	
					}
				}
				
			break;
			case 2:
	
				cout<<"\n\n\t Qual é seu peso?";
				cin>> pesoUsuario;
				cout<<"\n\n\t Qual é sua altura?";
				cin>> alturaUsuario;
	
				imcIndice = pesoUsuario / (alturaUsuario * alturaUsuario);
	
				cout<<"\n\n\t Este é o seu IMC: "<<imcIndice;
	
				if (imcIndice < 18.5) {
					cout<<"\n\n\t Seu índice abaixo do peso ideal";
				}
	
				if((imcIndice >= 18.5) && (imcIndice <= 24.9 )) {
					cout<<"\n\n\t Seu índice está no peso ideal";
				}
	
				if((imcIndice >= 25) && (imcIndice <= 29.9)) {
					cout<<"\n\n\t Seu índice está acima do peso ideal";
				}
	
				if((imcIndice >= 30) && (imcIndice <= 34.9)) {
					cout<<"\n\n\t Seu índice caracteriza Obesidade Tipo I";
				}
	
				if((imcIndice >= 35) && (imcIndice <= 39.9)) {
					cout<<"\n\n\t Seu índice caracteriza Obesidade Tipo II";
				}
	
				if (imcIndice > 40) {
					cout<<"\n\n\t Seu índice caracteriza Obesidade Mórbida";
				}
			
			break;
			case 0:
				cout<<"\n\n\t Até logo!";
				
			break;
		}
	}while(opcaoMenu != 0 );
}

