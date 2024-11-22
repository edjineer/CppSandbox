# CppQuiz.org Notes

## Topics to Dive into Later

* Play around with lvalue reference and rvalue references
* Temporary materialization and Discarded value expressions
* std::move
* Expressions quiz

## General Tangents

[Cherno Intro to LValues and RValues](https://www.youtube.com/watch?v=fbYknr-HPYE)

* lvalues generally have a location to store data into
* lvalue references
  * Question: Why is it still in scope?
* Workaround: making a const lvalue reference as a parameter
* Const brought in a bunch because const is compatible with rvalues and lvalues
* rvalue reference
  * 2 ampersands for parameter means that you only take rvalue as input

[Cherno Intro to Move Semantics](https://www.youtube.com/watch?v=ehMg6zvXuMY&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=89)

* RValue References single biggest use case is move semantics. Intorduced in C++ 11
* Assign a pointer over instead of copying all the time
* Create a hollow object after move is done
  * Set pointer to null from original string
  * Set size to 0 i noriginal string
  * When old string has been destroyed
  * Question: Why is m_Data available when it is private?
* Follow Up: std::move

[Anders Knatten Oslo Users Group, LValues RValues, GLValues, XValues](https://www.youtube.com/watch?v=hkyZ8L343cU)

* Pre-C++11 there were just 2 categories: lvalue and rvalues
* Identity and Movability are 2 different attribute, and need different values
* lvalue = cant move, has identity
* rvalue = has no identity, but can move (renamed to prvalue, pure rvalue)
* xvalue = has identity but can move, x stands for expring lvalue
* glvalue = anything with an identity, includes xvalues and lvalues (generalized lvalue)
* rvalues = has no identity, but can move. Includes prvalues and xvalues

## Notes on Specific Quiz Question
