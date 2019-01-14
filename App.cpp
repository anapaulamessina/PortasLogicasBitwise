/*
	Programa para aprender portas l�gicas com
	a t�cnica bitwise.
	
	Autor: Ana Paula Messina
	
	Data: 30/08/2017
*/

#include <iostream>
#include "BuildBits.h"
BuildBits build;

using namespace std;

int main(int argc, char** argv)
{
	helper.ptbr(); // Linguagem Portugu�s
	operation.header();  // Imprime o cabe�alho
	build.contruirBits(); // Constr�i os bits
	build.menu(); // Menu de op��es
	
	helper.systemPause();
	return 0;
}
