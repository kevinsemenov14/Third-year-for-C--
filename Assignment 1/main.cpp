/* NAME   Kevin Semenov
 * CLASS  CS1C
 * DUe date 8/31/2016
 * Assignment 1
 */
#include "Deck.h"

int main()
{

	string arrayDeck[52];
	string FirstDeck[52];

// object of deck
Deck Cards;

cout << "built deck " << endl;
Cards.BuildDeck(arrayDeck);
// saves the first deck
for(int i=0; i <=51; i++){
	FirstDeck[i]=arrayDeck[i];

}

Cards.PrintDeck(arrayDeck);

cout << endl;
cout << "shuffled deck once" << endl;

Cards.ShuffleDeck(arrayDeck);

Cards.PrintDeck(arrayDeck);

Cards.CheckDeck(Cards,arrayDeck,FirstDeck);

cout << endl;
Cards.PrintDeck(arrayDeck);
	return 0;
}
