#include <iostream>

int main()
{
    const int numberOfCardsInDeck = 52;
    
    // Standard C Arrays
    const char specialPlayingCards [4] = {'K','Q','J','A'};
    
    //Making a collection of numbered playing cards and then reading them out
    int deckOfNumberedCards [numberOfCardsInDeck];
    for (int i=1;i<=numberOfCardsInDeck;i++)
    {
        deckOfNumberedCards[i] = i;
    }
    
    std::cout << "Numbered playing cards:" << std::endl; 
    for (int i=1;i<=numberOfCardsInDeck;i++) 
    {
        std::cout << deckOfNumberedCards[i];
        if (i<numberOfCardsInDeck) std::cout << ", ";
        else std::cout << ".";
    }
    
    std::cout << std::endl; // Keep this for a clean closing output in terminal

    return 0;
    
}
