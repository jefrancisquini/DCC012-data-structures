#include <iostream>
#include <ctime>
#include <cmath>
#include "FileManager.h"
#include "Order.h"
#include "Rating.h"
//----------UDCUMWR
using namespace std;
class Cenario01
{
private:
	Rating* rat;
	
	clock_t time_bubbleSort, time_quickSort;
	Order order;
public:
	Cenario01();
	virtual ~Cenario01();
	void executaCenario();
};



Cenario01::Cenario01()
{
	
}


Cenario01::~Cenario01()
{

}

void Cenario01::executaCenario()
{	
	int size = 0;
	cout << "Digite o tamanho a ser analisado:";
	cin >> size;
	rat = new Rating[size];
	PopulaObjeto(rat, "ratings_small.csv", size);

	/*EXECUÇÃO DO ALGORITIMO QUICKSORT*/
	time_quickSort = clock();
	order.quickSort(rat, 0, size - 1);
	time_quickSort = clock() - time_quickSort;
	/*FIM QUICKSORT*/

	cout << endl;
	cout << "Tempo Quicksort: " << time_quickSort / (double)CLOCKS_PER_SEC << " Seconds" << endl;
	cout << "Trocas Quicksort: " << order.totalTrocas << endl;
	cout << "Comparacoes Quicksort: " << order.comparacaoChave << endl;
	cout << "Tamanho: "<< size << endl;
	order.totalTrocas = 0;
	order.comparacaoChave = 0;
}


