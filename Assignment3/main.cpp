/*
 * main.cpp
 *
 *  Created on: Sep 21, 2016
 *      Author: kevin semenov
 *      Class : CS1C M/W
 */
#include "receipt.h"
namespace words {

receipt thing;

}  // namespace words

int main(){

cout << " Nike basketball shoes	$179.99 	22" << endl <<
		" Under Armour T-shirt   $29.99 	        33" << endl <<
		" Brooks running shoes	$121.44 	11" << endl <<
		" Asics running shoes	$165.88 	20" << endl <<
		" Under Armour shorts	$45.77 	        77" << endl << endl;


	words::thing.addToList();
	words::thing.addToList();
	words::thing.addToList();
	words::thing.addToList();
	words::thing.printList();
	words::thing.printTaxList();

cout << endl;
	cout << " Nike basketball shoes	$179.99 	18" << endl <<
			" Under Armour T-shirt   $29.99 	        30" << endl <<
			" Brooks running shoes	$121.44 	7" << endl <<
			" Asics running shoes	$165.88 	19" << endl <<
			" Under Armour shorts	$45.77 	        77" << endl << endl;



	return 0;
}



















