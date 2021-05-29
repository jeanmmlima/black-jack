#include "card.h"
#include <iostream>

Card::Card()
{
}

Card::Card(int _naipe, int _valor)
{
    naipe = _naipe;
    valor = _valor;
}

string Card::toString()
{
    string imprime;
    switch(naipe){
    case 0:
        imprime = "H";
        break;
    case 1:
        imprime = "D";
        break;
    case 2:
        imprime = "S";
        break;
    case 3:
        imprime = "C";
        break;
    }
   //transforma o inteiro valor em uma string para concatena-lo
    stringstream valortext;
    valortext << valor;
    imprime = imprime + valortext.str() ;
    return imprime;
}
