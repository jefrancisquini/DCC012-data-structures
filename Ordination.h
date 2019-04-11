#include <iostream>
#include "Rating.h"
using namespace std;
#ifndef Ordination_H
#define Ordination_H

void bubbleSort(Rating *vet, int tamanho);
int partition (int arr[], int low, int high);
void quickSort(int arr[], int low, int high);

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

int partition (Rating *arr, int low, int high)
{
    Rating pivot = arr[high];    //taking the last element as pivot
    int i = (low - 1);
    for (int j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j].getRating() <= pivot.getRating())
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(Rating *arr, int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
