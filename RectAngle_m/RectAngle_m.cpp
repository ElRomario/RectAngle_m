#include "Rectangle_m.h"
#include <iostream>

using namespace std;

Rectangle_m::Rectangle_m(double _w, double _h, char _s)
{
	width = _w;
	height = _h;
	symbol = _s;

}
Rectangle_m::~Rectangle_m()
{
}
void Rectangle_m::ShowFigure()
{
	for(int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++) 
			cout << symbol;
		cout << endl;
	}
	cout << endl;
}

void Rectangle_m::ShowPerimetr()
{
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
			if (j == 0 || j == width - 1 || i == height-1 || i == 0)
				cout << symbol;
			else
				cout << " ";
		cout << endl;
	}
}


void ChangeSymbol(Rectangle_m &r1, char _s)
{
	r1.symbol = _s;
}

void ChangePerimetr(Rectangle_m& r1, double w_, double h_)
{
	cout << "Enter Width:" << endl;
	cin >> w_;
	cout << "Enter Height:" << endl;
	cin >> h_;

	r1.height = h_;
	r1.width = w_;
}
