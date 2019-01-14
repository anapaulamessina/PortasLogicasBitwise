#include <cstdio>
#include <iostream>
#include <locale.h>

using namespace std;

// Classe destinada a utilit�rios
class CPPHelpers 
{
    public: 
        // N�o temos system("PAUSE") no Linux, ent�o aqui vai uma solu��o bem �til
        void systemPause()
        {
            cout << "Pressione qualquer tecla para continuar";
            getchar();
        }
        
        // Da mesma forma, n�o temos o system("CLS"), n�o produz o mesmo efeito mas � um quebra galho.
        void systemCls()
        {
            printf("\e[H\e[2J");
            
            #ifdef _WIN32
                system("CLS");
            #endif
            #ifdef _WIN64
                system("CLS");
            #endif
        }
        
        void ptbr()
	    {
	    	setlocale(LC_ALL, "Portuguese"); // Altera a linguagem para Portugu�s	
		}
};
