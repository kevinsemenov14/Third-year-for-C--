/* NAME   Kevin Semenov
 * CLASS  CS1C
 * DUe date 8/31/2016
 * Assignment 1
 */
#ifndef DECK_H_
#define DECK_H_
#include <string>
#include <iostream>
#include <ctime>
#include <sstream>
using namespace std;

/***********************************************************************
 * Deck class
 *   This class represents a deck of cards it allows the user to  shuffle
 *   the deck and print out the deck
 ***********************************************************************/
class Deck
{
public:
	/*********************************************************************
		 * CONSTRUCTORS & DESTRUCTOR
		 *********************************************************************/
	Deck();
	/*********************************************************************
		 * MUTATORS
		 *********************************************************************/
	   // makes a new deck of cards

	void BuildDeck(string arrayDeck[]);
		// shuffles the deck of cards once

	void ShuffleDeck(string arrayDeck[]);
		// prints the deck of cards

	void PrintDeck(string arrayDeck[]);
		// checks and shuffles the cards untill back to normal

	void CheckDeck(Deck Cards,string arrayDeck[], string newDeck[]);
private:









};


#endif /* DECK_H_ */
