#pragma once
#include<iostream>


// Card structure definition
struct Card
{
	std::string type;
	std::string suit;
	//+�������� �� �������
}; // end structure Card    


class DeckOfCards
{
public:
	DeckOfCards(); // constructor initializes deck
	void shuffle(); // shuffles cards in deck
	//void deal(); // deals cards in deck - �� �� ������ ���� Table, ������ �� � �������� �� ������ - �� ����� ������, �����, � ������� � �� ���� �������� // �� �� ������� � ����������, �� �� ����� ������� � ����������


private:
	Card deck[52]; // represents deck of cards
}; // end class DeckOfCards

