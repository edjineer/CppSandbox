#include <iostream>

void fizzBuzzTest();

//LESSON 1: https://www.youtube.com/watch?v=v_C9BC-bXcw&list=PLs3KjaCtOwSY34fFKyhOFovFlB7LikDwe
int main()
{
    std::cout <<"Hello World\n";
    fizzBuzzTest();
    return 0;
}

void fizzBuzzTest()
{
    //Challenge: Print every number between 1 and 100, 
    //However for numbers that are multiples of 3 print "Fizz" 
    //and for numbers that are multiples of five print "Buzz." 
    //For numbers that are multiples of both 3 and 5 print "FizzBuzz".

    for (int i = 1; i < 101; i++)
    {
        std::cout << i;
        if (i%3 == 0) std::cout << "Fizz";
        if (i%5 == 0) std::cout << "Buzz";
        std::cout << "\n";
    }
}

//LESSON 2: Functions https://www.youtube.com/watch?v=iK08U61qYVk&list=PLs3KjaCtOwSY34fFKyhOFovFlB7LikDwe&index=2





