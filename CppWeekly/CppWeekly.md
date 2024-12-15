# Cpp Weekly Notes

## Look Up Later

## Notes 

### #456: Return Value Optimization 

Date: Nov 25 2024
[Link](https://www.youtube.com/watch?v=DzUAqXMUjtc)

* Return Statements that have to do a memcpy in assembly (Compiler Explorer shows this)
* Experiment: **-Wnrvo** flag to say when it cant apply RVO
* Use QuickBench to assess performance
* Small composable functions will always be efficient, at least bc RVO
* With the original branching, it could not apply RVO in both branches
* Don't contruct both return values if you wont use both; one will be RVOd, the other will not
* Clang will in general compile faster code; under the hood creates more lookup tables

Look Up later:

* [likely] and [unlikely] attributes by a branch. How does the compiler deal with this