/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdlib.h>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a, b, c, X1, X2;
 cout<<"Ingresar a: ";
 cin>> a;
 cout<< "Ingresar b: ";
 cin>> b;
 cout << "ingresar c: ";
 cin >> c;
 X1=((-b+sqrt(b*-4*a*c))/2*a);
 X2=((-b-sqrt(b*-4*a*c))/2*a);
 cout<< "El X1 es  : "<<X1 <<endl;
 cout<< "El X2 es  : "<<X2 <<endl;
 
 return 0;
}
