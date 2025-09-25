//Aufgabe 4: Werte tauschen

//Erstelle eine Template-Funktion swap, die zwei Variablen beliebigen Typs
//als Referenz entgegennimmt und ihre Werte vertauscht. Zeige in deiner 
//main-Funktion, wie du die Funktion mit int und double-Variablen aufrufst 
//und die Vertauschung überprüfst.

//Beispiel für den Aufruf:
//C++

//int a = 5, b = 10;
//swap(a, b); // a ist jetzt 10, b ist 5

#include <iostream>
using namespace std;

//Funktion die einfach die zwei übergebene Elemente tauscht
template <typename T>
inline void swap2(T& ele1, T& ele2){
	T temp = ele1;
	ele1=ele2;
	ele2=temp;
}

int main(){
	
	// Test Varbiablen für Funktion
	int a = 42, b = 1337;
	double c = 4.2, d = 13.37;
	string e = "Hallo", f = "Welt";
	
	//Test für int
	cout << "Vor dem Tausch: " << a << " und " << b << endl;
	swap2(a,b);
	cout << "Nach dem Tausch: " << a << " und " << b << endl;
	
	//Test für double
	cout << "Vor dem Tausch: " << c << " und " << d << endl;
	swap2(c,d);
	cout << "Nach dem Tausch: " << c << " und " << d << endl;
	
	//Test für string
	cout << "Vor dem Tausch: " << e << " und " << f << endl;
	swap2(e,f);
	cout << "Nach dem Tausch: " << e << " und " << f << endl;
}
