/** @file assg13-tests.cpp
 *
 * @brief Unit tests for Assignment 13: C++ Classes and Data Abstraction
 *
 * @author Derek Harter
 * @note   class: COSC 1437, Fall 2024
 * @note   ide  : VS Code 1.92.2
 * @date   November 08, 2024
 *
 * Assignment unit tests.  This file contains tests of the work you do
 * for the individual tasks for the assignment.  You should perform the
 * tasks in order, from Task 1 through the last task.  To start a task,
 * change the `#undef` statement to `#define`.  This will enable the test
 * cases for that task.
 */
#include "Card.hpp"
#include "Deck.hpp"
#include "catch.hpp"
#include <iostream>
using namespace std;

// change these to #define when ready to begin working on each task,
// once defined they will enable the tests declared below for each task
#undef task1
#undef task2
#undef task3

/** Task 1: Card class refactoring tests
 * Define the following test case block and write your
 * code to pass these tests for the Task 1 implementation
 * of the refactoring of Card to a Class.
 */
#ifdef task1
TEST_CASE("<Card> refactoring tests", "[task1]")
{
  // test the constructor and the cardToString are working by creating
  // a few cards at random
  Card c1(ACE, SPADES);
  CHECK(c1.toString() == "ACE of SPADES");

  Card c2(KING, CLUBS);
  CHECK(c2.toString() == "KING of CLUBS");

  Card c3(FOUR, DIAMONDS);
  CHECK(c3.toString() == "FOUR of DIAMONDS");

  Card c4(EIGHT, HEARTS);
  CHECK(c4.toString() == "EIGHT of HEARTS");

  Card c5(JACK, SPADES);
  CHECK(c5.toString() == "JACK of SPADES");

  // test that a default constructor is also present, we need a default
  // initialization for this application.  By default when unspecified the
  // Card creates an ACE of DIAMONDS
  Card c;
  CHECK(c.toString() == "ACE of DIAMONDS");

  // more systematically create all possible cards in the standard deck
  for (Suit suit = DIAMONDS; suit <= SPADES; suit = static_cast<Suit>(suit + 1))
  {
    for (Face face = ACE; face <= KING; face = static_cast<Face>(face + 1))
    {
      Card newCard(face, suit);
      CHECK(newCard.getFace() == face);
      CHECK(newCard.getSuit() == suit);
    }
  }
}
#endif

/** Task 2: Deck constructor tests
 * Define the following test case block and write your
 * code to pass these tests for the Task 2 implementation
 * of the Deck constructor and getter method.
 */
#ifdef task2
TEST_CASE("<Deck> constructor and getCardAtIndex() tests", "[task2]")
{
  // A deck only defines a default constructor.  We expect all 52
  // cards to be constructed in a new deck, and to be unshuffled so
  // in a particular order.
  // Create a new deck to test.
  Deck mydeck;

  // The top card should be an ACE of DIAMONDS
  CHECK(mydeck.getCardAtIndex(0).toString() == "ACE of DIAMONDS");

  // The bottom card should be a KING of SPADES
  CHECK(mydeck.getCardAtIndex(51).toString() == "KING of SPADES");

  // The card 13th from the top should be the KING of the first suit, and
  // the 14th card is then the ACE of the next suit
  CHECK(mydeck.getCardAtIndex(12).toString() == "KING of DIAMONDS");
  CHECK(mydeck.getCardAtIndex(13).toString() == "ACE of CLUBS");

  // and well just check the next transition from the CLUBS to the HEARTS
  CHECK(mydeck.getCardAtIndex(25).toString() == "KING of CLUBS");
  CHECK(mydeck.getCardAtIndex(26).toString() == "ACE of HEARTS");

  // just as more examples of what you can now do, lets test that all of the
  // top 13 cards are in fact DIAMONDS
  for (int idx = 0; idx <= 12; idx++)
  {
    CHECK(mydeck.getCardAtIndex(idx).getSuit() == DIAMONDS);
  }
}
#endif

/** Task 3: Deck shuffle() tests
 * Define the following test case block and write your
 * code to pass these tests for the Task 3 implementation
 * of the Deck shuffle() member function
 */
#ifdef task3
TEST_CASE("<Deck> shuffle() tests", "[task3]")
{
  // create a new unshuffled deck using your constructor
  Deck mydeck;

  // Now attempt to shuffle the deck using your new member method.  As we
  // did in previous assignment we assume you shuffled the deck as described so
  // by setting the random seed we can actually know the order of the shuffle
  // that should result
  srand(42);
  mydeck.shuffle();

  // by setting the random seed we expect the following to be the top five
  // cards after the shuffle
  CHECK(mydeck.getCardAtIndex(00).toString() == "QUEEN of SPADES");
  CHECK(mydeck.getCardAtIndex(01).toString() == "NINE of CLUBS");
  CHECK(mydeck.getCardAtIndex(02).toString() == "ACE of CLUBS");
  CHECK(mydeck.getCardAtIndex(03).toString() == "NINE of SPADES");
  CHECK(mydeck.getCardAtIndex(04).toString() == "JACK of HEARTS");
}
#endif
