#include <iostream>
using namespace std;

class Card
{
public:
    string rank;
    string suit;
    void printCard()
    {
        cout << rank << suit;
    }
};

Card deck[52], temp;

void printDeck(Card *deck, int &size)
{
    for (int k = 0; k < size; k++)
    {
        deck[k].printCard();
        cout << endl;
    }
}

void shuffle()
{
    int j = 0;
    for (int i = 0; i < 52; i++)
    {
        j = rand() % 52;
        temp = deck[i];
        deck[i] = deck[j];
        deck[j] = temp;
    }
}

void print5Cards(Card *deck, int &size)
{
    for (int k = 0; k < 4; k++)
    {
        deck[k].printCard();
        cout << " ";
        size -= 1;
        for (int i = 0; i < size; i++)
        {
            deck[i] = deck[i + 1];
        }
    }
}


int main()
{
    int size = 52;
    // initialize Deck
    string rank[]{"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};
    string suit[]{"H", "C", "D", "S"};

    int l = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 13; j++)
        {
            deck[l].rank = rank[j];
            deck[l].suit = suit[i];
            l++;
        }
    }

    shuffle();
    printDeck(deck,size);
    cout << "First 5 cards -> ";

    print5Cards(deck,size);
    printDeck(deck,size);
}