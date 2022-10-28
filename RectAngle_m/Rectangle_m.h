#pragma once
class Rectangle_m
{
	double width;
	double height;
	char symbol;
	friend void ChangeSymbol(Rectangle_m  &r1 ,char _s);
	friend void ChangePerimetr(Rectangle_m& r1, double w_, double h_);
public:
	Rectangle_m(double _w, double _h, char _s);
	~Rectangle_m();
	void ShowFigure();
	void ShowPerimetr();

	

};

