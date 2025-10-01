#include <iostream>
#include <string>

class Buch{
	private:
		std::string titel;
		int seiten;
	public:
		Buch(std::string t, int s) : titel{t}, seiten{s} {}
		
		void druckeInfo(){
			std::cout << "Titel: " << titel << ", Seiten: " << seiten << '\n';
		}
};

int main(){
	Buch meinBuch{"C++ fuer Anfaenger", 300};
	meinBuch.druckeInfo();
	return 0;
}
