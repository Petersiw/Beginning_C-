//
//  main.cpp
//  Using Nested if Statement
//
//  Created by Peter Siw on 16/09/2017.
//  Copyright © 2017 Peter Siw. All rights reserved.
//

#include <iostream>

int main()
{
    char letter {};
    std::cout << "Enter a letter: ";
    std::cin >> letter;
    
    if (letter >= 'A')
    {
        if (letter <= 'Z')
        {
            std::cout << "You entered an uppercase letter." << std::endl;
            return 0;
        }
    }
    if (letter >= 'a')
    {
        if (letter <= 'z')
        {
            std::cout << "You entered a lowercase letter." << std::endl;
            return 0;
        }
    }
    std::cout << "You did not enter a letter." << std::endl;
/* if (isupper(letter))
 {
    std::cout << "You entered an uppercase letter." << std::endl;
    return 0;
 }
 
 if (islower(letter))
 {
    std::cout << "You entered a lowercase letter." << std::endl;
    retunr 0;
 }
 */
    
}
