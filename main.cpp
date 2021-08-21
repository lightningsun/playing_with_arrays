#include <iostream>

void SpecialTypesOfCards() 
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
}

void MakingNumberedCardsAndReadingThemOut()
{
    // Making a collection of numbered cards and then reading them out
    int totalNumberedCards = 52; // This can be hard-code changed to alter deck size
    
    int deckOfNumberedCards [totalNumberedCards]; // Making array the size of total numbered cards
    
    // Defining all cards within deckOfNumberedCards to their specific number
    for (int i=1;i<=totalNumberedCards;i++)
    {
        deckOfNumberedCards[i] = i;
    }
    
    // Reading the cards out (cout'ing)
    std::cout << "Numbered playing cards:" << std::endl; 
    for (int i=1;i<=totalNumberedCards;i++) 
    {
        std::cout << deckOfNumberedCards[i];
        if (i<totalNumberedCards) std::cout << ", ";
        else std::cout << ".";
    }
}

int main()
{
    //Run all the different experiments (comment out if you only want specifics to run)
    SpecialTypesOfCards();
    MakingNumberedCardsAndReadingThemOut();

    std::cout << std::endl; // Keep this for a clean closing output in terminal

    return 0;
    
}
