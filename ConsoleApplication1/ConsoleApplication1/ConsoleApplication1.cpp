// consoleapplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class CBagena
{
	int x;
	int y;
public:
	CBagena();
	CBagena(int a, int b);
	CBagena(CBagena &om);
	void setXY(int a, int b);
	void display();
};
CBagena::CBagena()
{

}
CBagena::CBagena(int a, int b)
{
	x = a;
	y = b;
}
CBagena::CBagena(CBagena &om)
{
	x = om.x * 2;
	y = om.y * 3;
}
void CBagena::setXY(int a,int b)
{
	x = a;
	y = b;
}
void CBagena::display()
{
	cout << "x=" << x << "y=" << y << endl;
}
CBagena Mytest()
{
	CBagena bf(1000, 3000);
	return bf;
}
int main()
{
	CBagena ot;
	//ot.display();
	//ot = Mytest();
	//ot.display();

	Mytest().display();

    return 0;
}

