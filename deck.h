#ifndef DECK_H
#define DECK_H

#include "main.h"
#include "card.h"

class deck
{
public:
    deck(size_t);

    deck(const deck&) = delete;
    deck(deck&&);

    deck& operator=(const deck&) = delete;
    deck& operator=(deck&&);

    ~deck();

    void add_card(card&);
    card& take_top();
    void peek_from_top(unsigned int);

    void restore_default();
    void print_deck();
    void shuffle_random();


private:
    deck() = default;
    deck(size_t, size_t);

    void swap(deck&, deck&);
    void default_deck();

    size_t size = 0;
    size_t num_of_cards = 0;
    card* cards_ = nullptr;
};

#endif // DECK_H
