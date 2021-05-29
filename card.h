#ifndef CARD_H
#define CARD_H
#include <string>
#include <sstream>

using namespace std;

class Card
{
    int naipe;
    int valor;
public:
    Card();
    Card(int _naipe, int _valor);
    string toString();
};

#endif // CARD_H
