/** @file Deck.hpp
 *
 * @brief Header file of Deck declarations for Assignment 13
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
 * This file contains the declarations for the Deck class that need to be
 * included by programs that want to use a Deck of playing Card instances.
 */
#include "Card.hpp"
#include <string>
using namespace std;

// protect from multiple inclusion of Deck declarations using C preprocessor
#ifndef DECK_HPP
#define DECK_HPP

// constant declarations
const int STANDARD_DECK_SIZE = 52;

/// @brief The declarations of the Deck type and its member variables and
///    member methods goes here.  These are included by other files that
///    use a Deck.  The implementations of member methods and constructors
///    go into the corresponding .cpp implementation file.

#endif // DECK_HPP
