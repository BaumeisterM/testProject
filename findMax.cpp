#include <iostream>

using namespace std;

template<typename T>
inline T findMax(T& wert1, T& wert2){
	return wert1>wert2?wert1:wert2;
} 

int main(){
	int i1=5, i2=10;
	double d1=3.14, d2 =2.71;
	
	int maxInt = findMax(i1,i2);
	double maxDouble =findMax(d1,d2);
	
	cout <<"Der größere Wert von max Int ist " << maxInt << " und von maxDouble ist " << maxDouble << endl;
}
