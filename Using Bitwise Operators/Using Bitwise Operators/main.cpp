//
//  main.cpp
//  Using Bitwise Operators
//
//  Created by Peter Siw on 07/09/2017.
//  Copyright © 2017 Peter Siw. All rights reserved.
//

#include <iostream>
#include <iomanip>

using std::setw;
using std::cout;

int main()
{
    unsigned int red {0XFF0000U}; //Colour red
    unsigned int white {0XFFFFFFU}; //Colour white
    
    cout << std::hex << std::setfill('0'); //Fill character 0
    cout << "Try out bitwise AND and OR operators: ";
    cout << "\nInitial value red = " << setw(8) << red;
    cout << "\nComplement - red = " << setw(8) << ~red;
    
    cout << "\nInitial value white = " << setw(8) << white;
    cout << "\nComplement - white = " << setw(8) << ~white;
    
    cout << "\nBitwise AND red & white = " << setw(8) << (red & white);
    cout << "\nBitwise OR red | white = " << setw(8) << (red | white);
    
    cout << "\n\nNow try successive exclusive OR operations:";
    unsigned int mask {red ^ white};
    cout << "\nmask = red ^ white = " << setw(8) << mask;
    cout << "\nmask ^ red         = " << setw(8) << (mask ^ red);
    cout << "\nmask ^ white       = " << setw(8) << (mask ^ white);
    
    unsigned int flags {0XFF}; //Flags variable
    unsigned int bit1mask {0X1}; //Selects bit 1
    unsigned int bit6mask {0X20}; //Selects bit 6
    unsigned int bit20mask {0X80000}; //Selects bit 20
    
    cout << "\n\nUse masks to select or set a particular flag bit: ";
    cout << "\nSelect bit 1 from flags: " << setw(8) << (flags & bit1mask);
    cout << "\nSelect bit 6 from flags: " << setw(8) << (flags & bit6mask);
    cout << "\nSwitch off bit 6 from flags: " << setw(8) << (flags &= ~bit6mask);
    cout << "\nSwitch on bit 20 from Flags: " << setw(8) << (flags |= bit20mask) << std::endl;
    
}
