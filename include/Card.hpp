/** @file Card.hpp
 *
 * @brief Header file Card and Suit / Face declarations for Assignment 13
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
 * This file contains the declarations for the Card class that need to be
 * included by programs that want to use a Card.
 */
#include <string>
using namespace std;

// protect from multiple inclusion of Card declarations using C preprocessor
#ifndef CARD_HPP
#define CARD_HPP

/// @brief Suit and Face enumerated type is closely related to a Card so we
//    declare them here to be used by Card and anyone playing with Cards
enum Suit
{
  DIAMONDS,
  CLUBS,
  HEARTS,
  SPADES
};

enum Face
{
  ACE,
  DEUCE,
  THREE,
  FOUR,
  FIVE,
  SIX,
  SEVEN,
  EIGHT,
  NINE,
  TEN,
  JACK,
  QUEEN,
  KING
};

/// @brief The declarations of the Card type and its member variables and
///    member methods goes here.  These are included by other files that
///    use a Card.  The implementations of member methods go into the
///    corresponding .cp implementation file.
class Card
{
public:
  // public member define the API of the Card class, these are the things that
  // users of the Card class can do with a Card

  // class constructors
  Card();
  Card(Face initFace, Suit initSuit);

  // methods to allow Card users to easily display this cards face and suit value
  string toString() const;

  // some getter methods, need these for testing
  Face getFace() const;
  Suit getSuit() const;

private:
  // private members are hidden from users of the Card class, only members of
  // card can use or see private member variables and functions.
  // we are practicing OOD data hiding, usually member variables are private
  Face face;
  Suit suit;

  // member methods that are not needed by users of Card, that are really just
  // helper methods only used by other Card methods can and should be private
  // to the Card class
  string suitToString() const;
  string faceToString() const;
};

#endif // CARD_HPP