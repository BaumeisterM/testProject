#include <iostream>
#include <string>
using namespace std;

//Template für numerische Werte die den absoluten Wert ausgeben
template<typename T>
T betrag(T t){
	if(t<=0){
		return -t;
	}
	return t;
}

//Spezialisierte templates für nicht numerische Werte
template<>
bool betrag<bool>(bool t){
	cerr << "Fehler: betrag() ist nur fuer numerische Werte definiert." << endl;
	return false;
}

template<>
char betrag<char>(char t){
	cerr << "Fehler! betrag() ist nur fuer numerische Werte definiert." << endl;
	return '0';
}

template<>
string betrag<string>(string t){
	cerr << "Fehler! betrag() ist nur fuer numerische Werte definiert." << endl;
	return "false";
}

int main(){
	//initialisieren von verschiedenen Datentypen
	int i=1;
	double d=2.4;
	float f=2.11;
	char c='c';
	string s="Hello";
	
	cout << "Fuer int: " << betrag(i) << endl;
	cout << "Fuer double: " << betrag(d)<< endl;
	cout << "Fuer float: " << betrag(f)<<endl;
	cout << "Fuer char: " << betrag(c)<<endl;
	cout << "Fuer string: " << betrag(s)<<endl;
}
