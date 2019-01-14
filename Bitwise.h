#include <iostream>
#include <bitset>

using namespace std;

class Bitwise // Classe para opera��es bitset
{
    public: // M�todos p�blicos
        
        bitset<8> OpNot(bitset<8> b) // Opera��o NOT ~ - Passando o par�metro do tipo bitwise b como valor.
        {
            return ~b; 
        }
        
        bitset<8> OpAnd(bitset<8> ba, bitset<8> bb) // Opera��o AND &
        {
            return (ba & bb); 
        }
    
        bitset<8> OpOr(bitset<8> ba, bitset<8> bb) // Opera��o OR |
        {
            return (ba | bb);
        }
    
        bitset<8> OpXor(bitset<8> ba, bitset<8> bb) // Opera��o XOR ^
        { 
            return (ba ^ bb);
        }
};
