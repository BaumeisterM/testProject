//Aufgabe 2: Array-Sortierung mit Template

//Erstelle eine Template-Funktion namens sortArray,
//die ein Array beliebigen Typs und seine Größe als
//Argumente entgegennimmt und das Array in aufsteigender 
//Reihenfolge sortiert. Verwende den Bubble Sort oder
//eine andere einfache Sortiermethode deiner Wahl. 
//Teste die Funktion mit einem Array aus int und einem 
//Array aus double.

//Hinweis: Die Funktion soll void zurückgeben, 
//da sie das übergebene Array direkt verändert.
#include <iostream>

using namespace std;

template<typename T>
void sortArray(T arr[], int size){
	for(int i=0; i<size-1;++i){
		for(int j=0;j<size-i-1;++j){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}
	for(int i=0;i<size;++i){
		cout << arr[i] << " ";
	}
	cout << endl; 
}

int main(){
	int iArr[5]={4,7,1,9,2};
	double dArr[7]={3.14, 13.37, 4.2, 11.11, 43.21, -73.31, -0.12};
	char cArr[4]={'c','q','z','g'};
	
	sortArray(iArr,sizeof(iArr)/sizeof(iArr[0]));
	sortArray(dArr,sizeof(dArr)/sizeof(dArr[0]));
	sortArray(cArr,sizeof(cArr)/sizeof(cArr[0]));
}
