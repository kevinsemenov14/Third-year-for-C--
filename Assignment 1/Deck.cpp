/* NAME   Kevin Semenov
 * CLASS  CS1C
 * DUe date 8/31/2016
 * Assignment 1
 */

#include "Deck.h"

/***********************************************************************
 * Deck::PrintDeck prints out the deck of cards
 ***********************************************************************/
	void Deck::PrintDeck(string arrayDeck[]){
		for(int i = 0; i<=51;i++){
			cout << arrayDeck[i];

			cout << endl;

		}

	}
   /***********************************************************************
	* Deck::Deck empty CONSTRUCTORS
	***********************************************************************/
Deck::Deck(){

}
/***********************************************************************
 * Deck::BuildDeck builds a new deck for the object
 ***********************************************************************/
void Deck::BuildDeck(string arrayDeck[])
{


	string arrayDeck2[]= {"Ace of Hearts", "Ace of Spades","Ace of Diamonds","Ace of Clubs",
			      "King of Hearts", "King of Spades","King of Diamonds","King of Clubs",
				  "Queen of Hearts", "Queen of Spades","Queen of Diamonds","Queen of Clubs",
				  "Jack of Hearts", "Jack of Spades","Jack of Diamonds","Jack of Clubs",
				  "10 of Hearts", "10 of Spades","10 of Diamonds","10 of Clubs",
				  "9 of Hearts", "9 of Spades","9 of Diamonds","9 of Club,",
				  "8 of Hearts", "8 of Spades","8 of Diamonds","8 of Clubs",
				  "7 of Hearts", "7 of Spades","7 of Diamonds","7 of Clubs",
				  "6 of Hearts", "6 of Spades","6 of Diamonds","6 of Clubs",
				  "5 of Hearts", "5 of Spades","5 of Diamonds","5 of Clubs",
				  "4 of Hearts", "4 of Spades","4 of Diamonds","4 of Clubs",
				  "3 of Hearts", "3 of Spades","3 of Diamonds","3 of Clubs",
				  "2 of Hearts", "2 of Spades","2 of Diamonds","2 of Clubs"};

	for(int i = 0;i <= 51;i++){
		arrayDeck[i]= arrayDeck2[i];
	}
}
/***********************************************************************
 * Deck::ShuffleDeck shuffles the deck of cards once by spliting the array
 * into two and then making a perfect shuffle from the first and 27th card
 ***********************************************************************/
 void Deck::ShuffleDeck(string arrayDeck[]){
string arrayOne[26];
string arrayTwo[26];
int x = 0;
int z = 0;
int y = 0;
// first half of the deck
for(int i=0; i <=25; i++){
	arrayOne[i]=arrayDeck[i];

}
// second half of the deck
for(int i = 26; i <=51; i++){

	arrayTwo[x]=arrayDeck[i];
x++;
}
// both arrys going back into the first arry
for(int w = 0; w <= 51;w++){
	arrayDeck[w] = arrayOne[y];
	w++;
	arrayDeck[w] = arrayTwo[z];
	y++;
	z++;
}

}
 /***********************************************************************
  * Deck::CheckDeck uses a while look to loop through the deck of cards
  * and checks the cards untill it was the first deck and if it is not
  * it will shuffle the deck of cards
  ***********************************************************************/
void Deck::CheckDeck(Deck Cards,string arrayDeck[], string newDeck[]){
	int count = 1;
	bool valid = true;
	while(valid ==true){

	if(arrayDeck[1] == newDeck[1])
	{
		cout << " Took " << count << " Shuffles to get deck back to normal.";
		valid = false;
	}
	else
	{
		Cards.ShuffleDeck(arrayDeck);
		count++;
	}
}

}




