
#include <iostream>
#include "Rating.h"
using namespace std;
class Order
{
public:
	Order();
	virtual ~Order();
	void bubbleSort(Rating *vet, int tamanho);
	int partition(Rating *arr, int low, int high);
	void quickSort(Rating *arr, int low, int high);
	int comparacaoChave = 0;
	int totalTrocas = 0;
};



Order::Order()
{
}


Order::~Order()
{
}

void Order::bubbleSort(Rating *vet, int tamanho) {
	Rating aux;
	for (int i = 0; i < tamanho - 1; i++) {
		for (int j = 0; j < tamanho - 1; j++) {
			comparacaoChave++;
			if (vet[j].getRating() > vet[j + 1].getRating()) {
				aux = vet[j];
				vet[j] = vet[j + 1];
				vet[j + 1] = aux;
			}
		}
	}
}

int Order::partition(Rating *arr, int low, int high)
{
	Rating pivot = arr[high];    //taking the last element as pivot
	int i = (low - 1);
	for (int j = low; j <= high - 1; j++)
	{
		// If current element is smaller than or
		// equal to pivot
		comparacaoChave++;
		if (arr[j].getRating() <= pivot.getRating())
		{
			i++;
			totalTrocas++;
			swap(arr[i], arr[j]);
		}
	}
	totalTrocas++;
	swap(arr[i + 1], arr[high]);
	return (i + 1);
}

void Order::quickSort(Rating *arr, int low, int high)
{
	if (low < high)
	{
		int pi = partition(arr, low, high);
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}
