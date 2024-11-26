---
name: 'Task 2: Declare a `Deck` of cards and construct it'
about: Task 2 for Students
title: 'Task 2: Declare a `Deck` of cards and construct it'
labels: enhancement
assignees: ''

---

**Description**

This is a relatively big task.  Take what you have learned about
classes in C++ and declare a `Deck` class.  The
`Deck` class needs a private member array variable of
`Card` instances to be able to hold a standard deck
of 52 cards.  You have to also declare
and implement a constructor and a member method that will be used
for testing your implementation.



**Suggested Solution**

1. Declare a class named `Deck` in the `include/Deck.hpp` header file.
You can look at the declaration of the `Card` class for help on the
syntax.  Don't forget the `;` after the closing curly brace.

2. You need to have a private array of `Card` types.  So create a
`private:` section in your class and declare an array called `deck`
of `Card` objects.  This array should be `STANDARD_DECK_SIZE` in size,
so that you will have 52 cards in the array and thus valid indexes
will be from 0 to 51 for this member variable.

3. Create a default constructor for the `Deck()`.  You need to
declare the constructor in the `.hpp` file.  But also you need to add
in the constructor to the `.cpp` implementation file.  The constructor
will do the same thing as your `createDeckOfCards()` from the previous
assignment, so you can copy the code from your previous assignment 12.
You need a loop over all of the face enumerations and all of the
suit enumerations so that you can initialize each index of your 52
cards in the array member variable to a distinct separate card.

4. Finally in order to test your function we need an accessor method
we can call that will return a card at a particular index in your
member array of Card items.  Here is the declaration of the public
member function you need


**Additional Requirements**

- 
