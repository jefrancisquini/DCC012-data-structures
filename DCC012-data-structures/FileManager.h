#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "Rating.h"
using namespace std;

#ifndef FileManager_H
#define FileManager_H

Rating *PopulaObjeto(Rating rat[], string arq);

#endif

/*IMPLEMENTAÇÃO DAS FUNÇÕES*/
Rating *PopulaObjeto(Rating rat[], string arq) {

	ifstream arquivo;
	int contador = 0, contAux = 0, userId, movieId, timestamp;
	float rating; string aux, str;
	arquivo.open(arq);
	if (arquivo.is_open()) {
		while (!arquivo.eof()) {
			if (contador > 0) {
				getline(arquivo, str);
				stringstream ss(str);
				while (getline(ss, aux, ',')) {
					switch (contAux)
					{
					case 0:
						userId = stoi(aux);
						break;
					case 1:
						movieId = stoi(aux);
						break;
					case 2:
						rating = stof(aux);
						break;
					case 3:
						timestamp = stoi(aux);
						break;
					default:
						break;
					}
					contAux++;
				}
				contAux = 0;
				rat[contador - 1] = Rating(userId, movieId, rating, timestamp);
			}
			else {
				getline(arquivo, str);
			}
			contador++;
		}
		arquivo.close();
	}
	else {
		cerr << "erro ao abrir arquivo!" << endl;
	}
	return rat;
};