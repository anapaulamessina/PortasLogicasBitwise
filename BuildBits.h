#include <iostream>
#include <bitset>

#include "CPPHelpers.h"
#include "Operations.h"

CPPHelpers helper;
Operations operation;

using namespace std;

class BuildBits : public Operations
{
	public:
		short r, x, y, inputvar;
		
    public: 
    	
		void contruirBits()
		{
			cout << "Esta operação inicial é necessária para popular o primeiro conjunto de 8 Bits em 0 ou 1 nas posições de 0 a 7.\n\n";
			for(x=0;x<=7;x++) // Popula o 8 bits um por um com 0/1
			{
				cout << "Defina o bit (0/1) na posição " << x << ": "; 
				
				cin >> inputvar;
				
				if (preencherBit(x, inputvar, bit) == false)
				{
					cout << "\nÉ aceito somente 0 ou 1 como valor\n\n";
					x--;
				}
			}
		
			cout << "\nPopule o segundo conjunto de 8 Bits.\n\n";
			for(x=0;x<=7;x++)
			{
				cout << "Defina o bit (0/1) na posição " << x << ": "; 
				
				cin >> inputvar;
				
				if (preencherBit(x, inputvar, bit2) == false)
				{
					cout << "\nÉ aceito somente 0 ou 1 como valor\n\n";
					x--;
				}
			}
			exibirBitsOriginais();    	
		}
		
		void menu()
		{
			while(true) // Enquanto for verdade.
			{
				cout << " *** Escolha uma opção: \n\n     1.Alterar Bits (Somente 1/True)\n     2.Setar tudo em 0\n     3.NOT\n     4.AND/NAND\n     5.OR/NOR\n     6.XOR/XNOR\n     7.Sair\n\n    R = ";
				cin >> r;
				
				helper.systemCls();
				header();
				
				switch(r)
				{
					case 1:
						alterarBits();
						break;
					
					case 2:
						setarZero();
						break;
					
					case 3:
						operacaoNot();
						break; 
					
					case 4:
						operacaoAnd();
						break; 
					
					case 5:
						operacaoOr();
						break; 
					
					case 6:
						operacaoXor();
						break; 
					
					case 7:
						cout << "\nAté mais...\n\n\n";
						exit(0);
					default:
						helper.systemCls();
						cout << "     \n\n* Entrada inválida, tente novamente..\n\n\n";
				}
			}	
		}
};
