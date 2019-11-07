#ifndef CARD_H
#define CARD_H

#include "main.h"

static const std::string ranks[] = {"\0", "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
static const std::string suites[] = {"\0", "CLUBS", "SPADES", "HEARTS", "DIAMONDS"};

enum rank{ACE = 1, JACK = 11, QEUEEN, KING};
enum suite{CLUBS = 1, SPADES, HEARTS, DIAMONDS};


class card
{
public:
    card();
    card(unsigned int, unsigned int);

    card(card&&);

    ~card() = default;

    card& operator=(card&&);
    card& operator=(const card&) = delete;

    std::string get_rank() const;
    std::string get_suite() const;
    void print_card() const;

private:
    card(const card&) = delete;

    void swap(card&, card&);

    std::string rank;
    std::string suite;
};

#endif // CARD_H
