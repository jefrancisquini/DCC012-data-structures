#include <iostream>
#include "FileManager.h"
#include "Ordination.h"
#include "Rating.h"
using namespace std;



int main() {
	cout << "TRABALHO DCC012 - ESTRUTURA DE DADOS II !" << endl;
	Rating rat[20];
	PopulaObjeto(rat, "ratings_little_small.csv");


	for (int i = 0; i < 20; i++) {
		cout << rat[i].getRating() << ",";
	}
	cout << endl;
	bubbleSort(rat, 20);
	for (int i = 0; i < 20; i++) {
		cout << rat[i].getRating() << ",";
	}
	cout << endl;
	system("PAUSE");
	return 0;
}