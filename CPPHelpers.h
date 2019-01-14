#include <cstdio>
#include <iostream>
#include <locale.h>

using namespace std;

// Classe destinada a utilitários
class CPPHelpers 
{
    public: 
        // Não temos system("PAUSE") no Linux, então aqui vai uma solução bem útil
        void systemPause()
        {
            cout << "Pressione qualquer tecla para continuar";
            getchar();
        }
        
        // Da mesma forma, não temos o system("CLS"), não produz o mesmo efeito mas é um quebra galho.
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
	    	setlocale(LC_ALL, "Portuguese"); // Altera a linguagem para Português	
		}
};
