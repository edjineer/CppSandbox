#include <iostream>
#include <string>

bool chapter1();
bool chapter2(); 

int main() 
{
    std::cout << "Hello Worl, this is a Tour of C++\n";

    return 0;  

}

bool chapter1()
{
    // 1.4 Test out breaking initialization 
    int x = 4.5;
    int y (4.5); 
    int z {4}; //Breaks if {4.5}!
    bool q; //WRONG! Should be more specific with init, but won't break at run or compile. is BAD tho
    std::cout << x <<  " "<< y<< " "<< z<< " " << q << "\n";


}

bool chapter2()
{
    //ADAf
}