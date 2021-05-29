#ifndef DECK_H
#define DECK_H
#include <list>
#include "card.h"
#include <stdlib.h>
#include <stdio.h>
#include <iostream>

class Deck
{
    list<Card> c1 ;
public:
    Deck();
    Deck(int);
    string toString();
    Card draw();
    int cut(int n=52);
    list<Card> split(list<Card> ,int);
};


#endif // DECK_H
