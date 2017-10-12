//
//  main.cpp
//  Demonstrating Scope, Lifetime, and Global Variables
//
//  Created by Peter Siw on 07/09/2017.
//  Copyright © 2017 Peter Siw. All rights reserved.
//

#include <iostream>

long count1 {999L};     //Global count1
double count2 {3.14};   //Global count2
int count3;             //Global count3 - default initialisation

int main()
{   //Function scope starts here
    int count1 {10};    //Hides Global count1
    int count3 {50};    //Hides Global count3
    std::cout << "Value of outer count1 = " << count1 << std::endl;
    std::cout << "Value of global count1 = " << ::count1 << std::endl;
    std::cout << "Value of global count2 = " << count2 << std::endl;
    
    {   //New block scope starts here
        int count1 {20};    //This is a new variable that hides the outer count1
        int count2 {30};    //This hides global count2
        std::cout << "\nValue of inner count1 = " << count1 << std::endl;
        std::cout << "Value of global count1 = " << ::count1 << std::endl;
        std::cout << "Value of inner count2 = " << count2 << std::endl;
        std::cout << "Value of global count2 = " << ::count2 << std::endl;
        
        count1 = ::count1 + 3;      //This sets inner count1 to global count1 + 3
        ++::count1;                 //This changes global count1
        std::cout << "\nValue of inner count1 = " << count1 << std::endl;
        std::cout << "Value of global count1 = " << ::count1 << std::endl;
        count3 += count2;           //Increment outer count3 by inner count2
    }
    
    std::cout << "\nValue of outer count1 = " << count1 << std::endl
    << "Value of outer count3 = " << count3 << std::endl;
    std::cout << "Value of global count3 = " << ::count3 << std::endl;
    
    std::cout << count2 << std::endl;    //This is global count2
}
