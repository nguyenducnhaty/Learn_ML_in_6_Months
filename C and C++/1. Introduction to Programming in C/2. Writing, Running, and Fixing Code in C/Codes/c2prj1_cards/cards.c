#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "cards.h"

void assert_card_valid(card_t c) {
  assert((c.value >= 2 && c.value <= VALUE_ACE) && (c.suit >= SPADES && c.suit <= CLUBS));
}

const char * ranking_to_string(hand_ranking_t r) {
  switch (r) {
  case STRAIGHT_FLUSH: return "STRAIGHT_FLUSH"; break;
  case FOUR_OF_A_KIND: return "FOUR_OF_A_KIND"; break;
  case FULL_HOUSE: return "FULL_HOUSE"; break;
  case FLUSH: return "FLUSH"; break;
  case STRAIGHT: return "STRAIGHT"; break;
  case THREE_OF_A_KIND: return "THREE_OF_A_KIND"; break;
  case TWO_PAIR: return "TWO_PAIR"; break;
  case PAIR: return "PAIR"; break;
  case NOTHING: return "NOTHING"; break;
  default: return "?";
  }
}

char value_letter(card_t c) {
  if ((c.value >= 2) && (c.value <= 9)) {
    return ('0' + c.value);
  } else {
    switch (c.value) {
    case VALUE_ACE: return 'A'; break;
    case VALUE_KING: return 'K'; break;
    case VALUE_QUEEN: return 'Q'; break;
    case VALUE_JACK: return 'J'; break;
    case 10: return '0'; break;
    default: return EXIT_FAILURE;
    }
  }
}

char suit_letter(card_t c) {
  switch (c.suit) {
  case SPADES:return 's'; break;
  case HEARTS: return 'h'; break;
  case DIAMONDS: return 'd'; break;
  case CLUBS: return 'c'; break;
  default : return EXIT_FAILURE;
  }
}

void print_card(card_t c) {
  printf("%c%c", value_letter(c), suit_letter(c));
}

unsigned value_from_letter(char value_let) {
  if (value_let > '0' && value_let <= '9') {
    return value_let - '0';
  } else {
    switch (value_let) {
    case '0': return 10; break;
    case 'A': return VALUE_ACE; break;
    case 'K': return VALUE_KING; break;
    case 'Q': return VALUE_QUEEN; break;
    case 'J': return VALUE_JACK; break;
    default: return EXIT_FAILURE;
    }
  }
}

suit_t suit_from_letter(char suit_let) {
  switch(suit_let) {
  case 's': return SPADES; break;
  case 'h': return HEARTS; break;
  case 'd': return DIAMONDS; break;
  case 'c': return CLUBS; break;
  default: return EXIT_FAILURE;
  }
}

card_t card_from_letters(char value_let, char suit_let) {

  card_t temp;
  
  // Make the card
  temp.value = value_from_letter(value_let);
  temp.suit = suit_from_letter(suit_let);

  // Assert if the card value is within the acceptable limit
  assert_card_valid(temp);

  return temp;
}

card_t card_from_num(unsigned c) {

  assert(c >= 0 && c < 52);
  
  card_t temp;
  temp.suit = c / 13;
  temp.value = c % 13 + 2;
  return temp;
}
