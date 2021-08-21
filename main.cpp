#include <iostream>

int main()
{
    const int numberOfCardsInDeck = 52;
    const int numberOfSpecialTypesOfCards = 4;
    
    // Declaring and Defining the C-Style Arrays (Defining special types of playing cards)
    const char specialPlayingCardsAcronym [numberOfSpecialTypesOfCards] = {'K','Q','J','A'}; // 2D array
    const char specialPlayingCardsFullName [numberOfSpecialTypesOfCards][6] = {"King", "Queen", "Jack", "Ace"}; //2D array with defined length

    // Reading the C-Style Arrays (Reading the types of special playing cards)
    std::cout << "The type of special playing cards are: " << std::endl;
    for (int i = 0; i < numberOfSpecialTypesOfCards; i++)
    {
        std::cout << specialPlayingCardsAcronym[i] << " which is also known as " 
        << specialPlayingCardsFullName[i] << std::endl;
    }

    std::cout << std::endl << std::endl;

    // Making a collection of numbered cards and then reading them out
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
