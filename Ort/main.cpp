#include "Ort1.h"
#include <iostream>

int main(){
	Ort1 einOrt1, zweitOrt2(70,0), nochEinOrt3(70,90);
	einOrt1.aendern(100,200);
	
	std::cout << "Der Ort einOrt1 hat die Koordinaten x= " << einOrt1.getX() << " und die y= " << einOrt1.getY() << std::endl;
	std::cout << "Der Ort zweitOrt2 hat die Koordinaten x="<< zweitOrt2.getX() << " und die y= "<< zweitOrt2.getY() << std::endl;
	std::cout << "Der Ort nochEinOrt3 hat die Koordinaten x=" << nochEinOrt3.getX() << " und die y= " << nochEinOrt3.getY() << std::endl;
}
