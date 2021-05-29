#include "deck.h"

using namespace std;

Deck::Deck()
{
    for(int i = 1; i<14; i++){
        c1.push_back(Card(0,i));
        c1.push_back(Card(1,i));
        c1.push_back(Card(2,i));
        c1.push_back(Card(3,i));
    }
}

Deck::Deck(int n)
{

}

string Deck::toString()
{
    string imprime;
    imprime = "[";
    for(std::list<Card>::iterator it = c1.begin(); it != c1.end(); it++){
        Card carta = *it;
        if(it != c1.begin()){
            imprime = imprime + " " + carta.toString();
        }
        else{
            imprime = imprime + carta.toString();
        }
    }
    imprime = imprime + "]";
    return imprime;
}

Card Deck::draw()
{
    Card null(4,0);
    if(!c1.empty()){
        Card carta;
        carta = *c1.begin();
        c1.pop_front();
        return carta;
    }
    else{
        return null;
    }
}

int Deck::cut(int n)
{
    int cont=0;
    for(int i = 0; i<n; i++){
        if(rand() %52 + 1 < 26){
            cont++;
        }
    }
    return cont;
}

list<Card> Deck::split(list<Card> l, int c)
{
    list<Card> temp;
    for(int i=0; i< c; i++){
        temp.push_back(l.front());
        l.pop_front();
    }
    return temp;
}


