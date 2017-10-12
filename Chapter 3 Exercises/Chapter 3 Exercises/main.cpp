//
//  main.cpp
//  Chapter 3 Exercises
//
//  Created by Peter Siw on 08/09/2017.
//  Copyright © 2017 Peter Siw. All rights reserved.
//

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::setw;
using std::endl;

int main ()
{
    
    //Exercise 3.1
    
    unsigned int a {};
    
    cout << "Please insert an integer: ";
    cin >> a;
    
    //Invert the bits of the integer
    
    unsigned int mask_a {~a};
    
    cout << std::hex << std::setfill('0') << std::showbase;
    cout << "The original integer in hexadecimals, the inversion and the original value + 1 are \n"
    << setw(8) << a << " " << setw(8) << mask_a << " " << setw(8) << (a + 1);
    
    cout << "\n\nThe corresponding values in decimals are \n"
    << std::dec << std:: setfill(' ') << setw(8) << a << " " << setw(8) << mask_a << " " << setw(8) << (a + 1) << endl;
    
    //Exercise 3.2
    
    double shelf_length {}, shelf_depth {};
    unsigned int box_length {};
    
    cout << "Please insert the length and depth of the shelf in feet, separated by a space ";
    cin >> shelf_length; cout << " "; cin >> shelf_depth; cout << endl;
    
    cout << "Please insert the length of the box in inches ";
    cin >> box_length; cout << endl;
    
    const unsigned int inches_per_feet {12U};
    
    shelf_depth *= inches_per_feet;     //convert depth to inches
    shelf_length *= inches_per_feet;    //convert length to inches
    
    long boxes {static_cast<long>(shelf_depth / box_length) *
        static_cast<long>(shelf_length/ box_length)};
    
    cout << "The number of boxes that can be contained within this shelf is/are "
    << boxes << " box(es).\n";
    
    //Exercise 3.4
    
    unsigned int packed {};
    unsigned char ch {};
    
    cout << std::left << "Please insert a letter \n";           //Letter #1
    cin >> ch;
    packed |= ch;
    
    cout << std::left << "Please insert another letter \n";     //Letter #2
    cin >> ch;
    packed <<= 8;
    packed |= ch;
    
    cout << std::left << "Please insert another letter \n";     //Letter #3
    cin >> ch;
    packed <<= 8;
    packed |= ch;
    
    cout << std::left << "Please insert another letter \n";     //Letter #4
    cin >> ch;
    packed <<= 8;
    packed |= ch;
    
    cout << std::hex << std::showbase << std::setfill('0')
    << "The letters correspond to " << packed << " in hexadecimals." << endl;
    
    //Unpack
    unsigned int mask {0X000000FF};     //Keep low order byte
    
    ch = mask & packed;
    
    cout << "The letters in reverse order are " << ch;
    
    ch = mask & (packed >>= 8);
    
    cout << " " << ch;
    
    ch = mask & (packed >>= 8);
    
    cout << " " << ch;
    
    ch = mask & (packed >>= 8);
    
    cout << " " << ch << endl;
    
    //Exercise 3.5
    
    long aa {}, bb {};
    
    cout << "Please insert two integers, separated by a space: ";
    cin >> aa; cout << " "; cin >> bb; cout << endl;
    
    aa = aa + bb;
    bb = aa - bb;
    aa = aa - bb;
    
    cout << "The two integers, swapped, are " << std::dec << aa << " and " << bb << endl;
    
    //Exercise 3.6
    
    cout << std::hex << endl;
    
    const unsigned int R {0X00FF0000};
    const unsigned int G {0X0000FF00};
    const unsigned int B {0X000000FF};
    
    enum class Colour :unsigned int {Red = R, Green = G, Yellow = R | G, Purple = R | B, Blue = B,
        Black = 0, White = R | G | B};
    
    Colour colour1 {Colour::Yellow};
    Colour colour2 {Colour::Purple};
    Colour colour3 {Colour::Green};
    
    unsigned int Colour {static_cast<unsigned int>(colour1)};
    cout << "The Red component of Yellow is "
    << ((Colour  & R) >> 16) << endl;
    cout << "The Green component of Yellow is "
    << ((Colour & G) >> 8) << endl;
    cout << "The Blue component of Yellow is "
    << (Colour & B) << endl;
    
    Colour = static_cast<unsigned int>(colour2);
    cout << "\n\nThe Red component of Purple is "
    << ((Colour  & R) >> 16) << endl;
    cout << "The Green component of Purple is "
    << ((Colour & G) >> 8) << endl;
    cout << "The Blue component of Purple is "
    << (Colour & B) << endl;
    
    Colour = static_cast<unsigned int>(colour3);
    cout << "\n\nThe Red component of Green is "
    << ((Colour  & R) >> 16) << endl;
    cout << "The Green component of Green is "
    << ((Colour & G) >> 8) << endl;
    cout << "The Blue component of Green is "
    << (Colour & B) << endl;
}
