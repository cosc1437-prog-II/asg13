---
name: 'Task 3: Shuffle the `Deck` of cards'
about: Task 3 for Students
title: 'Task 3: Shuffle the `Deck` of cards'
labels: enhancement
assignees: ''

---

**Description**

Add in a member method to the `Deck` class called `shuffle()`, that
when invoked will shuffle the deck of cards as described.

**Suggested Solution**

We will use the `rand()` function from the C standard library to perform
some random shuffling in this function.  The `<cstdlib>` is already
included for you in the `assg12-library.cpp` file so that you can call this
function.  We are going to shuffle the deck of cards by doing the following:

1. Iterate over all of the cards in the array from index 0 to 
   index `STANDARD_DECK_SIZE - 1`
   - Randomly generate a number in the range from 0 to 51 to serve
     as the index of another card in the deck.
   - Swap the card at the index we are iterating with the card at the
     index we randomly generated.


**Additional Requirements**

- 
