#include "card.h"

// methods
void card::print_card() const{
    std::cout << rank << " of " << suite << " ";
}

std::string card::get_rank() const{
    return rank;
}

std::string card::get_suite() const{
    return suite;
}

void card::swap(card& lhv, card& rhv){
    std::swap(lhv.rank, rhv.rank);
    std::swap(lhv.suite, rhv.suite);
}


// constructors
card::card()
{
 card(0,0);
}
card::card(unsigned int rank, unsigned int suite)
    : rank(ranks[rank]), suite(suites[suite])
{
}

// move constructor
card::card(card&& rhv)
{
    swap(*this, rhv);
}


// operators
card& card::operator=(card&& rhv){
    swap(*this, rhv);
    return *this;
}
//card& card::operator=(card& rhv){
//    swap(*this, rhv);
//    return *this;
//}


