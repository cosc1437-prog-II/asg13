/** @file Deck.cpp
 *
 * @brief Implemenation of Deck abstraction for Assignment 13
 *
 * @author Jane Programmer
 * @note   class: COSC 1437, Fall 2024
 * @note   ide  : VS Code 1.92.2
 * @date   November 08, 2024
 *
 * The Deck data type represents a collection of cards.  We assume a full
 * standard (western) deck of 52 playing cards in this assignment, though we
 * could generalize this to support other types of decks (like a Eucher deck)
 * if needed.
 *
 * This file contains the implementations of the Deck member functions and
 * constructors, destructors and helper functions.
 */
#include "Deck.hpp"
#include "Card.hpp"
using namespace std;

/**
 * @brief Default Deck constructor
 *
 * Create a standard deck of 52 playing cards, initially unshuffled.
 * We initialize our private member array of Card instances in the
 * constructor to ensure the new deck contains a full set of playing
 * cards.
 */
// your task 2 step 3 goes here, need a constructor that initializes your
// private array of Card instances correctly

/** @brief get Card from Deck at index
 *
 * This getter method is mainly for testing again.
 * We allow a user of the Deck to ask for the x'th
 * card.  For simplicity since we are using an array,
 * we consider the card at index 0 as the top of the deck
 * and the card at index 51 as the bottom.
 *
 * @param index The index of the card in the deck to get and
 *    return.  0 is the top card and 51 is the bottom card of
 *    the deck.
 *
 * @returns Card Returns the card at the indicated index.
 */
// your task 2 step 4 goes here, need these getter method
// to return the asked for card at index so we can test
// your constructor

/** @brief Shuffle this deck randomly
 *
 * This function shuffles this deck instance
 * randomly.   We shuffle by iterating
 * over each of the 52 cards / indexes of the private member deck array
 * of cards, randomly generating an index from 0 to 52-1, and then
 * swapping the card with the card at the random index.  The result should
 * be a well shuffled and randomly shuffled deck of cards.  This member is
 * not a constant member method, calling shuffle() will cause the
 * cards in our private array to be rearranged randomly, thus changing the
 * state of the Deck of cards.
 */
// your task 3 implementation of shuffle member method goes here
