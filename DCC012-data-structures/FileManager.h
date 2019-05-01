#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include "Rating.h"
using namespace std;

#ifndef FileManager_H
#define FileManager_H

Rating *PopulaObjeto(Rating rat[], string arq,int maximo);

#endif

/*IMPLEMENTAÇÃO DAS FUNÇÕES*/
Rating *PopulaObjeto(Rating rat[], string arq, int maximo) {

	ifstream arquivo;
	int contador = 0, contAux = 0, userId, movieId, timestamp;
	float rating; string aux, str;
	arquivo.open(arq.c_str());
	if (arquivo.is_open()) {
		while (!arquivo.eof()) {
			if (contador > 0) {
				getline(arquivo, str);
				stringstream ss(str);
				while (getline(ss, aux, ',')) {
					switch (contAux)
					{
					case 0:
						userId = atoi(aux.c_str());
						break;
					case 1:
						movieId = atoi(aux.c_str());
						break;
					case 2:
						rating = atof(aux.c_str());
						break;
					case 3:
						timestamp = atoi(aux.c_str());
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

            if(contador == maximo){
                arquivo.close();
                return rat;
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
