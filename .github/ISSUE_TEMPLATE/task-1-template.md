---
name: 'Task 1: Finish implementation of `Card` class members'
about: Task 1 for Students
title: 'Task 1: Finish implementation of `Card` class members'
labels: enhancement, good first issue
assignees: ''

---

**Description**

The `Card` class has mostly been implemented, but a few member methods
were left empty or returning default/stub values.  Finish the incomplete
member methods and constructor to pass the tests  of the `Card`
class for task 1.

**Suggested Solution**

1. Complete the standard `Card` constructor

The other constructor currently does nothing, which is not correct.
You need to initialize the `face` and `suit` member variables to the
given constructor input parameters.

2. Complete the `toString()` member method.

This member methods is similar to the `cardToString()` that you completed
before, and also similar to the already completed private `suitToString()`
and `faceToString()` member methods below.  You need to reuse the two
private member methods to construct a string representation of the
`Card` instance and return it.  Make sure you replace the `return` statement,
you should not return an empty string when this function is complete.

3. Complete the `getFace()` and the `getSuit()` accessor methods

We also need these two accessor methods for testing the `Card` class.  Notice
that, like most getter methods, these are `const` member methods.  This means
that if someone calls them they guarantee not to change the `Card` state,
by for example changing the face value of the card to something else.
For both of these methods you need to return the member variable being
asked for instead of returning a hard coded value as it currently does.


**Additional Requirements**

- 
