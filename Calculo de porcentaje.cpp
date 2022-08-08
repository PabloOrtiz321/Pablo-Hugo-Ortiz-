/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
 float sueldobruto,IVA, AFP, afpemp, ivaemp;
 IVA=0.13;
 AFP=0.121;
 cout<<"Ingresar el sueldo bruto: ";
 cin>>sueldobruto;
 ivaemp = sueldobruto * IVA;
 afpemp = sueldobruto * AFP;   
 cout<< "El descuento de AFP es : "<<afpemp <<endl;
 cout<< "El descuento de IVA es : "<< ivaemp;
 
 return 0;
}
