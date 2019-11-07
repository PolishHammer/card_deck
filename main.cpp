#include "main.h"
#include "deck.h"

void default_deck(deck& deck){
   for(auto j = 1; j<DIAMONDS+1; j++){
       for(auto i = 1; i<KING+1; i++){
            card new_card(i, j);
            deck.add_card(new_card);
        }
    }
}

int main(){
    deck new_deck(52);
    default_deck(new_deck);
    new_deck.print_deck();
    deck moved_deck(std::move(new_deck));
    std::cout << std::endl << "STARY DECK" << std::endl;
    new_deck.print_deck();
    std::cout << std::endl << "NOWY DECK" << std::endl;
    moved_deck.print_deck();


    return 0;
}
