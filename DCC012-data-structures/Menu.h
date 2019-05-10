#include <string>
#include <iostream>
#include <stdlib.h>
#include "Cenario01.h"
using namespace std;
class Menu
{

private:
	Cenario01 cenario01;
public:
	Menu();
	virtual ~Menu();
	void menuPrincipal();
	void menuAnaliseAlgoritimos();
	
	
};



Menu::Menu()
{
	this->menuPrincipal();

}
Menu::~Menu()
{
}


void Menu::menuAnaliseAlgoritimos() {
	system("CLS");
	int opcao = -1;
	int size = 0;
	cout << "*************************************************\n";
	cout << "*	            ANALISE DOS ALGORITMOS           *\n";
	cout << "*************************************************\n";
	cout << "Cenario 1: Impacto de diferentes estruturas de dados\n";
	cout << "Cenario 2: Impacto de variacoes do Quicksort\n";
	cout << "Cenario 3: Quicksort X InsertionSort X Mergesort X Heapsort X Meusort\n";
	cout << "Cenario 4: Tratamento de Colisoes: Enderecamento X Encadeamento\n";
	cout << "0 - Voltar\n";
	while (opcao != 0) {
		cout << "Escolha um Cenario:";
		cin >> opcao;
		switch (opcao)
		{
		case 0: {
			this->menuPrincipal();
			break;
		}
		case 1: {
			this->cenario01.executaCenario();
			break;
		}
		case 2: {
			break;
		}
		default: {
			cout << "Opção errada!";
			break;
		}
		}
		
	}	
}
void Menu::menuPrincipal() {
	system("CLS");
	int opcao = -1;
	cout << "*************************************************\n";
	cout << "*   TRABALHO DCC012 - ESTRUTURA DE DADOS II !   *\n";
	cout << "*************************************************\n";
	cout << "1 - ANALISE DOS ALGORITMOS\n";
	cout << "2 - Implementacao das Palavras-Chave Frequentes e dos Usuarios Ativos \n";
	cout << "0 - Sair\n";
	while (opcao != 0) {		
		cout << "Escolha um modulo:";
		cin >> opcao;
		switch (opcao)
		{
			case 0: {
				break;
			}
			case 1: {				
				this->menuAnaliseAlgoritimos();
				opcao = 0;
				break;
			}
			case 2: {
				break;
			}
			default: {
				cout << "Opção errada!";
				break;
			}
		}
	}

}
