#ifndef ORT1_H
#define ORT1_H

class Ort1{
	public:
	Ort1(int x=0, int y=0):xKoordinate{x},yKoordinate{y}{}
	[[nodiscard]] auto getX() const {return xKoordinate;}
	[[nodiscard]] auto getY() const {return yKoordinate;}
	void aendern(int x, int y) {xKoordinate=x; yKoordinate=y;}
	private:
	int xKoordinate;
	int yKoordinate;
};
#endif
