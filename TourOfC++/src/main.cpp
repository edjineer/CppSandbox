#include <iostream>
#include <string>
#include <cassert>
#include <vector>

bool chapter1();
bool test1a (int a, int &b);
bool test1b (const int &b);
void constCastEx();

bool chapter2();


int main() 
{
    std::cout << "Hello World, this is a Tour of C++\n";
    
    //chapter1();
    // constCastEx();
    chapter2();

    return 0;  

}

bool chapter1()
{
    std::cout << "Ch1: Basics\n";
    // 1.4 Test out breaking initialization 
    int x = 4.5;
    int y (4.5); 
    int z {4}; //Breaks if {4.5}!
    bool q; //WRONG! Should be more specific with init, but won't break at run or compile. is BAD tho
    std::cout << x <<  " "<< y<< " "<< z<< " " << q << "\n";

    //1.6 Immutability 
    const int a = 6;
    int b = 5;
    test1a(a,b);
    std::cout << a <<" " << b << "\n"; // Uh Oh! The value of B has changed bc passed by ref and not const

    constexpr int x1 = a;
    //constexpr int y1 = b; //Does not work bc b is not const, and b could be unknown at compiletime

    //1.7
    int a1 [6]; 
    a1[0] = 0;
    a1[1] = 1;
    int * a2 = &a1[1];
    std::cout << a1  << " " << *a2 << std::endl;

    int a3[6];
    int i = 0;
    for (auto const xx : {1.3, 2.3, 3.3})
    {
        a3[i++] = xx; //BUG! Invalid narrowing conversion 
        std::cout << i;
    }
    std::cout << a3[0]  << " " << a3[1] << std::endl;

    //Const with references 
    const int b1 = 6;
    test1b(b1);

    //Nullptr
    int *ptr = nullptr;

    return true;
}
bool test1a (int a, int &b)
{
    a = b;
    b = 1; 
    return true;
}
bool test1b (const int &b)
{
    int c = b;
    return true;
}

//Rainer Grimm Talk https://www.youtube.com/watch?v=tA6LbPyYdco
void constCastEx()
{
   std::cout << "Rainer Grimm: Const Convo\n";
   //ConstCast
   int myVar = 0; 
   int * mvptr = &myVar;
   const int * myV2 = const_cast<int*>(mvptr);
   assert(*myV2 == myVar);

   //Constexpr
    // constexpr std::vector<int> vec; Not allowed in Cpp17 

   //ConstEval = only runs at compile time 
    // consteval int x = 100; Cpp20only 
}

// class constLearning:
// {
//     public:

//         bool setMVar() const
//         {
//             int var = mVar;
//             mVar = 6;
//             return true; 

//         }

// };

bool chapter2()
{
    std::cout << "Ch2: User Defined Types\n";

    return false; 
}