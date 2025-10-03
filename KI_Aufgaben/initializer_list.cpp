#include <iostream>
#include <initializer_list>
#include <vector>

class Zahlenfolge{
	public:
	Zahlenfolge(){}
	explicit Zahlenfolge(int i) {folge.push_back(i);}
	Zahlenfolge(int i1, int i2){
		folge.push_back(i1);
		folge.push_back(i2);
	}
	Zahlenfolge(std::initializer_list<int> liste): folge(liste){}
	
	void print() const{
		std::cout << "Folge: ";
		for(auto element : folge){
			std::cout << element << " ";
		}
		std::cout << '\n';
	}
	
	private:
	std::vector<int> folge;
};

int main(){
	Zahlenfolge zf1{1,2,3,4,5};
	Zahlenfolge zf2{2,1,4,3,5};
	Zahlenfolge zf3(1);
	Zahlenfolge zf4(3,4);
	Zahlenfolge zf5{2,3};
	
	zf1.print();
	zf2.print();
	zf3.print();
	zf4.print();
	zf5.print();
}
