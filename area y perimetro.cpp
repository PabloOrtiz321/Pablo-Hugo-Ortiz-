// area y perimetro.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "conio.h"
using namespace std;
int main() {
	float perimetro, area, radio, P;
	P=3.1416;
	cout << "Introducir el radio:"<<endl;
	cin >> radio;
	perimetro= 2*P*radio; 
	cout << "El perimetro es: "<<endl; 
	cout << perimetro <<endl;
	area= P*(radio*radio);
	cout << "El area es: " <<endl;
	cout << area <<endl;
	getch(); 
	return 0;
}

