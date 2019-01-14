#include <iostream>
#include <unistd.h> // usleep

#include "Bitwise.h"

using namespace std;

class Operations : public Bitwise // Classe com métodos das operações, herdando a classe Bitwise
{
	public: // Atributos públicos

		bitset<8> bit, bit2; // Definindo 8 bits
		short posx, x;
		bool a;
	
	public: // Métodos públicos necessários para as operações bitwise do programa
	
		void line() // Imprimir linha de separadores
		{
			cout << "======================================" << endl;
		}
		
		void header() // Cabeçalho do programa
		{
			cout << "===================================================" << endl;
			cout << "BITWISE NA PRÁTICA EM C++ - Tec Dicas - 30/08/2017" << endl;
			cout << "===================================================" << endl;	
		}
	
		void exibirBitsOriginais() // Exibir mensagem padrão dos conjuntos de bits originais
		{
			line();
			cout << "1º conjunto Original : " << bit << "\n";
			cout << "2º conjunto Original : " << bit2 << "\n";
			line();
		}
	
		
		void alterarBits() // Alterar o bit por bit
		{
			exibirBitsOriginais();
			
			cout << "Esta operação permite modificar o primeiro conjunto de 8 Bits para 1 em suas respectivas posições.\n\n";
			
			cout << "\nDefina o bit para alterar (Posição de 0 a 7): "; 
			cin >> posx;
			
			cout << "\nDefina o valor 1 para a posição " << posx << ": ";
			cin >> a;
		
			bit |= ( a << posx);
			
			cout << "\n\nAltere o segundo conjunto de 8 Bits.\n\n"; 
			
			cout << "\nDefina o bit para alterar (Posição de 0 a 7): "; 
			cin >> posx;
			
			cout << "\nDefina o valor 1 para a posição " << posx << ": ";
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
		
		void operacaoNot() // Operação NOT
		{
			exibirBitsOriginais();
			cout << "A condição da lógica NOT (Inversora) é: \n\n";
			line();
			cout << "Bitwise NOT : " << OpNot(bit) << "\n";
			cout << "Bitwise NOT : " << OpNot(bit2) << "\n";
			line();
		}
	
		void operacaoAnd() // Operação AND e NAND
		{
			exibirBitsOriginais();
			cout << "A condição da lógica AND (E) e NAND (E Inverso) é: \n\n";
			line();
			cout << "Bitwise AND  : " << OpAnd(bit,bit2)  << "\n";
			cout << "Bitwise NAND : " << ~OpAnd(bit,bit2)  << "\n";
			line();
		}
		
		void operacaoOr() // Operação OR e NOR
		{
			exibirBitsOriginais();
			cout << "A condição da lógica OR (OU Inclusivo) e NOR (OU Incl. Inverso) é: \n\n";
			line();
			cout << "Bitwise OR  : " << OpOr(bit,bit2)  << "\n";
			cout << "Bitwise NOR : " << ~OpOr(bit,bit2) << "\n";
			line();
		}
		
		void operacaoXor() // Operação XOR e XNOR
		{
			exibirBitsOriginais();
			cout << "A condição da lógica XOR (OU Exclusivo) e XNOR (OU Excl. Inverso) é: \n\n";
			line();
			cout << "Bitwise XOR  : " << OpXor(bit,bit2) << "\n";
			cout << "Bitwise XNOR : " << ~OpXor(bit,bit2) << "\n";
		    line();
		}
	
		bool preencherBit(int posicao, int valor, bitset<8>& bit) // Método para preencher os bits em suas respectivas posições, verificando se é diferente de 0 ou 1
		{
			if (!(valor == 1 || valor == 0))
			{
				return false;
			}
			
			bit |= (valor << posicao);
			
			return true;
		}
};
