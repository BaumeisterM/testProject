#include <iostream>
#include <limits>


void pruefeZahl(unsigned int zahl) // prüfen, ob zahl im Bereich liegt
{
	if (zahl < 1 || zahl > std::numeric_limits<unsigned int>::max()) {
		std::cerr << "Zahl " << zahl << " liegt nicht im Bereich!" << std::endl;
	}
	else{
		std::cout << "Zahl " << zahl << " liegt im Bereich!"  << std::endl;
	}
}

int main(){
	unsigned int ui;
	std::cout << "Gib eine Zahl ein!" << std::endl;
	std::cin>>ui;
	
	pruefeZahl(ui);
}
