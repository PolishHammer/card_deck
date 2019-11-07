#include "deck.h"

// methods
void deck::add_card(card& card){
    if(card.get_rank() != "\0" && card.get_suite() != "\0"){
        cards_[num_of_cards] = std::move(card);
        num_of_cards++;
    }
}

card& deck::take_top(){
    return cards_[--num_of_cards];
}

void deck::peek_from_top(unsigned int num_cards){
    for(unsigned int i= 0; i<num_cards; i++){
        std::cout << i+1 << ". ";
        cards_[num_of_cards - 1 - i].print_card();
    }
}


void deck::restore_default(){
    default_deck();
}

void deck::print_deck(){
    for(unsigned int i = 0; i<size; i++){
        if(cards_[i].get_rank()!= "\0"){
            cards_[i].print_card();
            std::cout << std::endl;
        }
    }
}

void deck::shuffle_random(){

}


void deck::swap(deck& lhv, deck& rhv){
    std::swap(lhv.size, rhv.size);
    std::swap(lhv.num_of_cards, rhv.num_of_cards);
    std::swap(lhv.cards_, rhv.cards_);
}

void deck::default_deck(){
    for(unsigned int i = 1; i<15 ; i++){
        for(unsigned int j = 1; j<5; j++){

        }
    }
}

// costructors
deck::deck(size_t size_, size_t num_of_cards_)
    : size(size_), num_of_cards(num_of_cards_), cards_(new card[size])
{

    std::cout << std::endl << std::endl << "ALOKACJA" << std::endl << std::endl;
}


deck::deck(size_t size)
    : deck(size, 0)
{
}


deck::deck(deck&& rhv)
    : deck()
{
    swap(*this, rhv);
}

// operators
deck& deck::operator=(deck&& rhv)
{
    swap(*this, rhv);
    return *this;
}

deck::~deck()
{
    delete[] cards_;
}
