#include <iostream>
#include <unistd.h> // usleep

#include "Bitwise.h"

using namespace std;

class Operations : public Bitwise // Classe com m�todos das opera��es, herdando a classe Bitwise
{
	public: // Atributos p�blicos

		bitset<8> bit, bit2; // Definindo 8 bits
		short posx, x;
		bool a;
	
	public: // M�todos p�blicos necess�rios para as opera��es bitwise do programa
	
		void line() // Imprimir linha de separadores
		{
			cout << "======================================" << endl;
		}
		
		void header() // Cabe�alho do programa
		{
			cout << "===================================================" << endl;
			cout << "BITWISE NA PR�TICA EM C++ - Tec Dicas - 30/08/2017" << endl;
			cout << "===================================================" << endl;	
		}
	
		void exibirBitsOriginais() // Exibir mensagem padr�o dos conjuntos de bits originais
		{
			line();
			cout << "1� conjunto Original : " << bit << "\n";
			cout << "2� conjunto Original : " << bit2 << "\n";
			line();
		}
	
		
		void alterarBits() // Alterar o bit por bit
		{
			exibirBitsOriginais();
			
			cout << "Esta opera��o permite modificar o primeiro conjunto de 8 Bits para 1 em suas respectivas posi��es.\n\n";
			
			cout << "\nDefina o bit para alterar (Posi��o de 0 a 7): "; 
			cin >> posx;
			
			cout << "\nDefina o valor 1 para a posi��o " << posx << ": ";
			cin >> a;
		
			bit |= ( a << posx);
			
			cout << "\n\nAltere o segundo conjunto de 8 Bits.\n\n"; 
			
			cout << "\nDefina o bit para alterar (Posi��o de 0 a 7): "; 
			cin >> posx;
			
			cout << "\nDefina o valor 1 para a posi��o " << posx << ": ";
			cin >> a;
		
			bit2 |= ( a << posx);
			
			line();
			cout << "Bits alterados : " << bit << "\n";
			cout << "Bits alterados : " << bit2 << "\n";
			line();
		}
		
		void setarZero() // Setar todos os bits em 0
		{
			for(x=7;x>=0;x--)
			{
				bit  = 0x00;
				bit2 = 0x00;
			}
			line();
			cout << "SETANDO TUDO COMO 0 \n";
			line();
			cout << "Processando..\n\n";
		    
			usleep(500000);
		    
			cout << "\nTudo OK!\n\n";
		}
		
		void operacaoNot() // Opera��o NOT
		{
			exibirBitsOriginais();
			cout << "A condi��o da l�gica NOT (Inversora) �: \n\n";
			line();
			cout << "Bitwise NOT : " << OpNot(bit) << "\n";
			cout << "Bitwise NOT : " << OpNot(bit2) << "\n";
			line();
		}
	
		void operacaoAnd() // Opera��o AND e NAND
		{
			exibirBitsOriginais();
			cout << "A condi��o da l�gica AND (E) e NAND (E Inverso) �: \n\n";
			line();
			cout << "Bitwise AND  : " << OpAnd(bit,bit2)  << "\n";
			cout << "Bitwise NAND : " << ~OpAnd(bit,bit2)  << "\n";
			line();
		}
		
		void operacaoOr() // Opera��o OR e NOR
		{
			exibirBitsOriginais();
			cout << "A condi��o da l�gica OR (OU Inclusivo) e NOR (OU Incl. Inverso) �: \n\n";
			line();
			cout << "Bitwise OR  : " << OpOr(bit,bit2)  << "\n";
			cout << "Bitwise NOR : " << ~OpOr(bit,bit2) << "\n";
			line();
		}
		
		void operacaoXor() // Opera��o XOR e XNOR
		{
			exibirBitsOriginais();
			cout << "A condi��o da l�gica XOR (OU Exclusivo) e XNOR (OU Excl. Inverso) �: \n\n";
			line();
			cout << "Bitwise XOR  : " << OpXor(bit,bit2) << "\n";
			cout << "Bitwise XNOR : " << ~OpXor(bit,bit2) << "\n";
		    line();
		}
	
		bool preencherBit(int posicao, int valor, bitset<8>& bit) // M�todo para preencher os bits em suas respectivas posi��es, verificando se � diferente de 0 ou 1
		{
			if (!(valor == 1 || valor == 0))
			{
				return false;
			}
			
			bit |= (valor << posicao);
			
			return true;
		}
};
