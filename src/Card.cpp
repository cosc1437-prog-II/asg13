/** @file Card.cpp
 *
 * @brief Implemenation of Card abstraction for Assignment 13
 *
 * @author Jane Programmer
 * @note   class: COSC 1437, Fall 2024
 * @note   ide  : VS Code 1.92.2
 * @date   November 08, 2024
 *
 * The Card data type represents a single standard playing card for a
 * deck of cards or for a card game program.  The Suit and Face
 * enumerated types are declared in this file as well as they are closely
 * related to a standard Card definition.  A single card consists of
 * a Suit value and a Face value.
 *
 * This file contains the implementations of the Card member functions, as
 * well as any helper functions for the Suit and Face enumerated types.
 */
#include "Card.hpp"
#include <string>
using namespace std;

/**
 * @brief Default Card constructor
 *
 * Create a single standard playing Card.  This default constructor is required
 * for the application, we need to intialize a card to some default vaule when
 * needed.  In this case we initialize any unspecified cards to be the
 * ACE of DIAMONDS, the 0th enum value for Face and Suit
 */
Card::Card()
{
  face = ACE;
  suit = DIAMONDS;
}

/**
 * @brief Standard Card constructor
 *
 * Create a single standard playing Card.  Normally an application is
 * creating a deck of cards, so we know the face and suit value of each
 * individual card we need to create for the deck for some card game. Thus
 * this constructor is usually the only constructor we need for our Card
 * data type abstraction
 *
 * @param initFace The Face value to initialize this new card with.
 * @param initSuit The Suit value to initialize this new card with.
 */
Card::Card(Face initFace, Suit initSuit)
{
  // your task 1 step 1 code goes here
}

/** @brief Convert Card struct to string
 *
 * A Card structure represents a single playing card.
 * We reuse the private suitToString() and faceToString() functions
 * to generate a string representation of the given card.
 *
 * @returns string Returns a string name of the indicated Card enumerated
 *   type given to this function.
 */
string Card::toString() const
{
  // your task 1 step 2 code goes here, remember to return an actual string
  // not an empty string
  return "";
}

/** @brief get the Card face
 *
 * Getter method to access and return the Card face.  The face
 * member variable is private.  But for testing purposes we
 * add in this getter method so that we can find out what the
 * current setting of the face is for this card.
 *
 * @returns Face Returns the face value of this Card instance.
 */
Face Card::getFace() const
{
  // your task 1 step 3 code goes here, need to return something
  // other than a hardcoded values from this getter
  return ACE;
}

/** @brief get the Card suit
 *
 * Getter method to access and return the Card suit.  The suit
 * member variable is private.  But for testing purposes we
 * add in this getter method so that we can find out what the
 * current setting of the suit is for this card.
 *
 * @returns Suit Returns the suit value of this Card instance.
 */
Suit Card::getSuit() const
{
  // your task 1 step 3 code goes here, need to return something
  // other than a hardcoded values from this getter
  return DIAMONDS;
}

/** @brief Convert Suit enum to string
 *
 * This function is a helper function for the Card and the Suit enumerated type.
 * Given the Suit of this card, return a string representation
 * of the card Suit. This will be used when creating a card game using\
 * these functions.
 *
 * @returns string Returns a string name of the Suit enumerated
 *   type for this Card instahce.
 */
string Card::suitToString() const
{
  switch (suit)
  {
  case DIAMONDS:
    return "DIAMONDS";
  case CLUBS:
    return "CLUBS";
  case HEARTS:
    return "HEARTS";
  case SPADES:
    return "SPADES";
  default:
    return "SUITUNKNOWN";
  }
}

/** @brief Convert Face enum to string
 *
 * This function is a helper function for the Card and the Face enumerated type.
 * Given the Face of this Card, return a string
 * representation of that Face. This will be used when creating a card
 * game using these functions.
 *
 * @param face A Face enumerated type that should be converted to its
 *   string representation.
 *
 * @returns string Returns a string name of the  Face enumerated
 *   type for this Card instance.
 */
string Card::faceToString() const
{
  switch (face)
  {
  case ACE:
    return "ACE";
  case DEUCE:
    return "DEUCE";
  case THREE:
    return "THREE";
  case FOUR:
    return "FOUR";
  case FIVE:
    return "FIVE";
  case SIX:
    return "SIX";
  case SEVEN:
    return "SEVEN";
  case EIGHT:
    return "EIGHT";
  case NINE:
    return "NINE";
  case TEN:
    return "TEN";
  case JACK:
    return "JACK";
  case QUEEN:
    return "QUEEN";
  case KING:
    return "KING";
  default:
    return "FACEUNKNOWN";
  }
}
