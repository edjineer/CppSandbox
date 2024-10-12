# Tour of Cpp 2nd Edition

## Future Books

* Design and Evolution of C++ from Stroustroup, and 2 papers from ACM history of programming conferences 1993, 2007
* C++ Core Guidelines
* Agile Development in Medical Software TII
* Clean Code horrible performance
* Horrible code, clean performance
* Annotated C++ Reference Manual (ARM)
* Technical Specifications for ISOs
* Modern C++
* Extern

## Future Topics

* Non-preemptive Scheduling
* RAII (Resource aquisition is initialization)
* Virtual Functions
* Lambdas
* noexcept
* Namespaces
* Compiler Basics for C++ Developers

## 1. The Basics

## 2. User-Defined

## 3. Modularity

## 4. Classes

## 5. Essential Operations

## 6. Templates

## 7. Concepts and Generic Programming

## 8. Library Overview

## 9. Strings and Regular Expressions

## 10. Input and Output

## 11. Containers

## 12. Algorithms

## 13. Utilities

## 14. Numerics

## 15. Concurrency

a

## 16. History and Compatibility

1. History  
  Timeline
    * 1979: "C with Classes"
      * Classes, private/public, contructors, destructors, function declarations.
      * First libraries concurrent tasks and random number generators
    * 1984: renamed in 1984 to C++
      * Virtual Functions
      * Operator overloading
      * References
      * I/O stream
      * Complex Num Libraries
    * 1985: Commercial release of C++
      * Added inlining, const
      * Run time polymorphism was most controversial
      * "C++ is a general-purpose programming language that is better than C, supports data abstraction(information hiding, classes that are not part of class hierarchies, and generic programming), and supports object-oriented programming"
    * 1991: C++ second edition
      * Generic programming with templates
      * error handling RAII
      * general resource
      * Multiple inheritance
      * interfaces
    * 1997: C++ Third Edition
      * ISO C++, big standardization efforts
        * Partnership with Bell labs
      * namespaces
      * dynamic cast
      * refinements of templates
      * STL generic containers and algorithms
    * 1998: ISO C++ Standard
    * 2011: ISO C++ 11, aka C++0x
      * Uniform Initialization
      * Move Semantics
      * Types from initializers
      * Range-for
      * Variadic template arguments
      * Lambdas
      * Type Aliases
      * Memory model for concurrency
      * STL: Threas, locks
      * History
        * Long gap (13 years) between standards: Committee thought there was a wait period after a standard was issued to work on new features
        * Aims of Cpp11 = Make it a better language for systems programming and library building, make it easier to teach and learn
        * Switched to "train model" for continuous updates, 3 years
        * Technical Specifications from ISO
    * 2014: ISO C++ 14
      * Digit Separators
      * Generic Lambdas
    * 2015: C++ Core Guidelines
    * 2017: C++ 17
      * Order of evaluation guarantees
      * Fold Expressions
      * File System library
      * Variant and Optional Types
      * History
        * Intended to be a medium release
    * 2020: C++20 standard
    The Early Years  
    * C++'s name was coined by Rick Masitti in 1983, improvement from "C with Classes" previous name
    * First use of C++ outside of research was 1983
    * Ctor and dtor started off as "new function" and "delete function"
    Standards and Style
    C++Use
    * 4.5 million devs in 2018

2. C++ Feature Evolution  
    C++ Language Features
    * Cpp11
      * range-for
      * enums
      * auto
      * nullptr
      * lambdas
    * Cpp14
      * constexpr improvement
    * Cpp17
      * compile time ifs
      * constexpr lambdas
    Standard Library Additions
      * Cpp11
        * Move semantics for containers
        * Hash containers
        * Resource management pointers like unique_ptr, shared ptr
        * High level concurrency support
        * regex
      * Cpp14
        * shared_mutex
        * User literals
        * Tuple addressing by type
      * Cpp17
        * File system
    Deprecated Features (as of Cpp17)
      * Cpp helped replace old stuff with noexcept
      * autoptr replaced with unique_ptr
      * cannot ++ a bool
3. C/C++ Compatibility
      * C++ is a superset of C
      * Issues: void* casted without a type
      * linkage issues
4. Advice Style Tips
      * Use Cpp Stl as a teacher for new techniques and styles
      * Macros substitution not necessary: use const and const expr, enum, enum class, inline, templates, namespaces
      * Don't declare a variable before you need it; initialize it immediately
      * Avoid void *
      * Avoid unions
      * Avoid casts
      * Use static_cast if you need to convert a type explicitly
      * Minimize arrays and c style strings
