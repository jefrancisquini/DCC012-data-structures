#include <iostream>
#include <ctime>
#include <cmath>
#include "FileManager.h"
#include "Ordination.h"
#include "Rating.h"
#define MAX 20000
using namespace std;


/**
    main.cpp
    Purpose: main file of project

    @author Jean Francisquini
    @version 1.0 11/04/2019
*/
int main() {
	cout << "TRABALHO DCC012 - ESTRUTURA DE DADOS II !" << endl;
	Rating rat[MAX];
	clock_t time_bubbleSort,time_quickSort;

	PopulaObjeto(rat, "ratings_small.csv",MAX);


	/*for (int i = 0; i < MAX; i++) {
		cout << rat[i].getRating() << ",";
	}*/
	cout << endl;
	time_bubbleSort = clock();
	bubbleSort(rat, MAX);
	time_bubbleSort = clock() - time_bubbleSort;
	time_quickSort = clock();
	quickSort(rat,0,MAX-1);
	time_quickSort = clock() - time_quickSort;
	/*for (int i = 0; i < MAX; i++) {
		cout << rat[i].getRating() << ",";
	}*/
	cout << endl;
	cout<<"Tempo Bubblesort: "<<time_bubbleSort/(double)CLOCKS_PER_SEC<<" Seconds"<<endl;
	cout<<"Tempo Quicksort: "<<time_quickSort/(double)CLOCKS_PER_SEC<<" Seconds"<<endl;
	cout << endl;
	//system("PAUSE");
	return 0;
}
