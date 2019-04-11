#include <iostream>
#include "Rating.h"
using namespace std;
#ifndef Ordination_H
#define Ordination_H

void bubbleSort(Rating *vet, int tamanho);

#endif

void bubbleSort(Rating *vet, int tamanho) {
	Rating aux;
	for (int i = 0; i < tamanho - 1; i++) {
		for (int j = 0; j < tamanho - 1; j++) {
			if (vet[j].getRating() > vet[j + 1].getRating()) {
				aux = vet[j];
				vet[j] = vet[j + 1];
				vet[j + 1] = aux;
			}
		}
	}
}