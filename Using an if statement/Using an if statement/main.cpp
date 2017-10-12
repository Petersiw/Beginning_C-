//
//  main.cpp
//  Using an if statement
//
//  Created by Peter Siw on 10/09/2017.
//  Copyright © 2017 Peter Siw. All rights reserved.
//

#include <iostream>

int main ()
{
    std::cout << "Enter an integer between 50 and 100: ";
    int value {};
    std::cin >> value;
    if ((value < 50) | (value > 100))
    {
        std::cout << "The value is invalid" << std::endl;
        return 0;
    }
    std::cout << "You entered " << value << std::endl;
}
