#include <iostream>
#include <bitset>

using namespace std;

class Bitwise // Classe para operações bitset
{
    public: // Métodos públicos
        
        bitset<8> OpNot(bitset<8> b) // Operação NOT ~ - Passando o parâmetro do tipo bitwise b como valor.
        {
            return ~b; 
        }
        
        bitset<8> OpAnd(bitset<8> ba, bitset<8> bb) // Operação AND &
        {
            return (ba & bb); 
        }
    
        bitset<8> OpOr(bitset<8> ba, bitset<8> bb) // Operação OR |
        {
            return (ba | bb);
        }
    
        bitset<8> OpXor(bitset<8> ba, bitset<8> bb) // Operação XOR ^
        { 
            return (ba ^ bb);
        }
};
