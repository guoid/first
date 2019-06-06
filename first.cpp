// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include"iostream"
using namespace std;
class CFeet
{
private:
	int feet;
	int inches;
public:
	int getfeet();
	int getinches();
	CFeet operator+(CFeet&obj);
	void setvalue(int fe, int in);
	void display();
};
int CFeet::getfeet() {
	return feet;
}
int CFeet::getinches(){
	return inches;
}
void CFeet::setvalue(int fe, int in)
{
	feet = fe + in / 12;
	inches = in % 12;

}
void CFeet::display()
{
	cout << feet << "Ӣ��" << inches << "Ӣ��" << endl;
}
CFeet CFeet::operator+(CFeet&obj)
{
	CFeet t;
	t.setvalue(feet + obj.feet, inches + obj.inches);
	return t;
}

int main()
{
	CFeet a, b, c;
	a.setvalue(10, 5);
	b.setvalue(12, 9);
	c = a + b;
	c.display();
    return 0;
}

