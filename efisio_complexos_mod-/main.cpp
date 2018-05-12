/*
 * main.cpp
 *
 *  Created on: 8 de mai de 2018
 *      Author: efisi
 */
//Executando as operações

#include "Complexo.h"
#include <iostream>
using namespace std;


int main (){

//Exemplo
	 Complexo z1(2, 3);
	 Complexo z2(1, 1);
	 Complexo z3= z1.Soma(z2);

	cout<<(z3.Modulo())<<endl;



return 0;
}

