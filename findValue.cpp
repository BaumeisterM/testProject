//Aufgabe 3: Array-Suche mit Template

//Schreibe eine Template-Funktion namens findValue, die ein Array und einen
//Wert beliebigen Typs annimmt und den Index des ersten Vorkommens des Werts 
//im Array zurückgibt. Sollte der Wert nicht gefunden werden, gib -1 zurück. 
//Teste die Funktion mit einem Array aus std::string und einem Array aus int.

//Funktions-Signatur:
//template <typename T> int findValue(const T arr[], int size, const T& value)
#include <iostream>
#include <string>

using namespace std;
//Template um nach Elementen zu suchen
template <typename T>
int findValue(const T arr[], int size, const T& value){
	for(int i=0;i<size;++i){
		if(arr[i]==value){
			return i;
		}
	}
	return -1;
}

int main(){
	//String und Int Array deklariert und initialisiert
	string abc[] = {"Hallo", "Welt", "und", "Hallo", "Geany", "!"};
	int arr[] = {12,45,88,42,1337,102,-122,8,-42,-233,-1,1983};
	//Suche nach dem Wort "Welt" im string-Array
	cout << findValue(abc,sizeof(abc)/sizeof(abc[0]), string("Welt")) << " fuer string" << endl;
	//Suche nach der Zahl "102" im int-Array
	cout << findValue(arr,sizeof(arr)/sizeof(arr[0]), 102) << " fuer int" <<endl;
}
