/*
	Programa para aprender portas lógicas com
	a técnica bitwise.
	
	Autor: Ana Paula Messina
	
	Data: 30/08/2017
*/

#include <iostream>
#include "BuildBits.h"
BuildBits build;

using namespace std;

int main(int argc, char** argv)
{
	helper.ptbr(); // Linguagem Português
	operation.header();  // Imprime o cabeçalho
	build.contruirBits(); // Constrói os bits
	build.menu(); // Menu de opções
	
	helper.systemPause();
	return 0;
}
