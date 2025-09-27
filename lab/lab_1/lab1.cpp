// lab0.cpp Zichu Pan p.zichu@wustl.edu
// Entry point of program, prints out default Pinochle deck and hold 'em deck.
#include <iostream>
#include "PinochleDeck.h"
#include "HoldEmDeck.h"

int main() {
    // PinochleDeck pinochleDeck;
    // HoldEmDeck holdEmDeck;

    // std::cout << "Pinochle Deck:" << std::endl;
    // pinochleDeck.print(std::cout, 6);
    // std::cout << std::endl;

    // std::cout << "Texas Hold 'Em Deck:" << std::endl;
    // holdEmDeck.print(std::cout, 13);
    // std::cout << std::endl;

    // pinochleDeck.shuffle();
    // std::cout << "Pinochle Deck:" << std::endl;
    // pinochleDeck.print(std::cout, 6);
    // std::cout << std::endl;

    // holdEmDeck.shuffle();
    // std::cout << "Texas Hold 'Em Deck:" << std::endl;
    // holdEmDeck.print(std::cout, 13);
    // std::cout << std::endl;

    // return 0;

    try {
        // Create two Pinochle decks
        PinochleDeck pinochleDeck;
        PinochleDeck pinochleDeck2;
        
        // Create two HoldEm decks
        HoldEmDeck holdEmDeck;
        HoldEmDeck holdEmDeck2;
        
        // Print initial Pinochle deck
        std::cout << "Initial Pinochle Deck:" << std::endl;
        pinochleDeck.print(std::cout, 6);
        std::cout << std::endl;
        
        // Test is_empty() on full deck
        std::cout << "Pinochle Deck empty? " << (pinochleDeck.is_empty() ? "Yes" : "No") << std::endl;
        std::cout << "Pinochle Deck2 empty? " << (pinochleDeck2.is_empty() ? "Yes" : "No") << std::endl;
        std::cout << std::endl;
        
        // Transfer 3 cards from pinochleDeck to pinochleDeck2
        try {
            std::cout << "Transferring 3 cards from Pinochle Deck to Pinochle Deck2..." << std::endl;
            pinochleDeck >> pinochleDeck2 >> pinochleDeck2 >> pinochleDeck2;
            
            std::cout << "\nPinochle Deck after transfer:" << std::endl;
            pinochleDeck.print(std::cout, 6);
            
            std::cout << "\nPinochle Deck2 after receiving cards:" << std::endl;
            pinochleDeck2.print(std::cout, 6);
            std::cout << std::endl;
        } catch (const std::runtime_error& e) {
            std::cerr << "Error during Pinochle transfer: " << e.what() << std::endl;
        }
        
        // Test with HoldEm deck
        std::cout << "Initial Texas Hold 'Em Deck:" << std::endl;
        holdEmDeck.print(std::cout, 13);
        std::cout << std::endl;
        
        // Shuffle and then transfer
        holdEmDeck.shuffle();
        std::cout << "Shuffled Texas Hold 'Em Deck:" << std::endl;
        holdEmDeck.print(std::cout, 13);
        std::cout << std::endl;
        
        // Transfer 5 cards to holdEmDeck2
        try {
            std::cout << "Transferring 5 cards from HoldEm Deck to HoldEm Deck2..." << std::endl;
            for (int i = 0; i < 5; ++i) {
                if (!holdEmDeck.is_empty()) {
                    holdEmDeck >> holdEmDeck2;
                }
            }
            
            std::cout << "\nHoldEm Deck after transfer:" << std::endl;
            holdEmDeck.print(std::cout, 13);
            
            std::cout << "\nHoldEm Deck2 after receiving cards:" << std::endl;
            holdEmDeck2.print(std::cout, 13);
            std::cout << std::endl;
        } catch (const std::runtime_error& e) {
            std::cerr << "Error during HoldEm transfer: " << e.what() << std::endl;
        }
        
        // Test exception: create empty deck and try to transfer
        std::cout << "Testing exception handling with empty deck..." << std::endl;
        try {
            PinochleDeck emptyDeck;
            PinochleDeck targetDeck;
            
            // Transfer all cards out to make it empty
            while (!emptyDeck.is_empty()) {
                emptyDeck >> targetDeck;
            }
            
            // Now try to transfer from empty deck (should throw)
            std::cout << "Attempting to transfer from empty deck..." << std::endl;
            emptyDeck >> targetDeck;
            
            // Should not reach here
            std::cout << "ERROR: Exception was not thrown!" << std::endl;
        } catch (const std::runtime_error& e) {
            std::cout << "Successfully caught exception: " << e.what() << std::endl;
        }
        
        std::cout << "\nAll tests completed successfully!" << std::endl;
        
    } catch (const std::exception& e) {
        std::cerr << "Unexpected error: " << e.what() << std::endl;
        return 1;
    } catch (...) {
        std::cerr << "Unknown error occurred" << std::endl;
        return 2;
    }
    
    return 0;
}
