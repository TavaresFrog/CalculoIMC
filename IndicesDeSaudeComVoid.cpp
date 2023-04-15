	#include <iostream>
	#include <stdlib.h>
	#include <conio.h>
	#include <time.h>
	#include <stdio.h>
	#include <windows.h>
	#include <cmath>
	#include <unistd.h>

using namespace std;


void heightComparedNational(){
	
	double tamanhoUsuario;
	string sexoUsuario;
	
	
	system("color 4"); 
	cout<<"\n\n\t Voc� � homem ou mulher ";
	cout<<"(responda com h ou m)";
	system("color 7"); 
	cin>> sexoUsuario;
	cout<<"\n\n\t Qual � a sua altura?:   ";
	cin>> tamanhoUsuario;
	
	if (sexoUsuario == "h"){
		system("color 2");
		if (tamanhoUsuario < 1.72){
			cout<<"\n\n\t Sua altura est� abaixo da m�dia";
		}
		if (tamanhoUsuario == 1.72){
			cout<<"\n\n\t Sua altura est� na m�dia";	
		}
		if (tamanhoUsuario > 1.72){
			cout<<"\n\n\t Sua altura est� acima da m�dia";	
		}
	}
	
	if (sexoUsuario == "m"){
		
		if (tamanhoUsuario < 1.61){
			system("color 5");
			cout<<"\n\n\t Sua altura est� abaixo da m�dia";
		}
		if (tamanhoUsuario == 1.61){
			system("color 1");
			cout<<"\n\n\t Sua altura est� na m�dia";	
		}
		if (tamanhoUsuario > 1.61){
			system("color 2");
			cout<<"\n\n\t Sua altura est� acima da m�dia";	
		}
	}
	cout<<"\n\n\t Tecle qualquer bot�o para continuar!";	
	getch();
	system("cls");
						
}

void calcIMC(){

	double pesoUsuario;
	double alturaUsuario;
	double imcIndice;
	
	cout<<"\n\n\t Qual � o seu peso?:   ";
	cin>> pesoUsuario;
	cout<<"\n\n\t Qual � a sua altura?:   ";
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
	cout<<"\n\n\t Tecle qualquer bot�o para continuar!";	
	getch();
	system("cls");
} 
	
void calcCardiacRisk(){
	
	double userHeight;
	double userWidth;
	double userRelation;
	string userCardiacResult;
	
	cout<<"\n\n\t Qual � a sua altura?:   ";
	cin>>userHeight;
	cout<<"\n\n\t Qual � a sua circunfer�ncia de cintura?:   ";
	cin>>userWidth;
	
	userRelation = userWidth / userHeight;
	
	if (userRelation <= 0.4){
		userCardiacResult = "Inexistente";
		
	}
	
	if ((userRelation >= 0.4) && (userRelation <= 0.49 )){
		userCardiacResult = "Baixo";
		
	}
	
	if ((userRelation >= 0.5) && (userRelation <= 0.59 )){
		userCardiacResult = "M�dio";
		
	}
	
	if (userRelation >= 0.6){
		userCardiacResult = "Alto";
		
	}
	
	cout<<"\n\n\t �ndice cintura/altura: "<<userRelation;
	cout<<"\n\n\t Risco cardiavascular: "<<userCardiacResult;								
	cout<<"\n\n\t Tecle qualquer bot�o para continuar!";
	
	getch();
	system("cls");	
}

 main() {

	setlocale(LC_ALL, "Portuguese");

	int opcaoMenu = 0;
	
	system("color 3");

	do{
		cout<<"\n\n\n\n\t\t\t\t >>>> Este programa vai usar sua altura e peso <<<<";
		cout<<"\n\n\n\t 1_ Programa para comparar sua altura com a m�dia nacional";
		cout<<"\n\n\t 2_ Programa para calcular seu �ndice de Massa Corporal (IMC)";
		cout<<"\n\n\t 3_ Programa para calcular risco cardiovascular";	
		cout<<"\n\n\t 0_ Sair do programa";
		cout<<"\n\n\t Digite o n�mero da op��o desejada:   ";
		    cin>>opcaoMenu;
		system("cls");
		switch(opcaoMenu) {
			case 1:
				heightComparedNational();				
			break;
			
			case 2:
				calcIMC();
			break;
			
			case 3:
				calcCardiacRisk();					
			break;
			
			case 0:
				cout<<"\n\n\t At� logo! Tecle qualquer bot�o para encerrar o programa.";
				
			break;
		}
	}while(opcaoMenu != 0 );
}


	


