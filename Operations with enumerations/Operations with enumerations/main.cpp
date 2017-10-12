//
//  main.cpp
//  Operations with enumerations
//
//  Created by Peter Siw on 07/09/2017.
//  Copyright © 2017 Peter Siw. All rights reserved.
//

#include <iostream>
#include <iomanip>

using std::setw;
using std::cout;

int main ()
{
    enum class Day { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday }
    yesterday { Day::Monday }, today { Day::Tuesday }, tomorrow { Day::Wednesday };
    
    Day poets_day{ Day::Friday };
    
    enum class Punctuation : char {Comma = ',', Exclamation = '!', Question = '?' };
    Punctuation ch{Punctuation::Comma};
    
    cout << "Yesterday's value is " << static_cast<int>(yesterday) << static_cast<char>(ch) <<
    " but poet's day is " << static_cast<int>(poets_day) << static_cast<char>(Punctuation::Exclamation)
    << std::endl;
    
    today = Day::Thursday;
    ch = Punctuation::Question;
    tomorrow = poets_day;
    
    cout << "Is today's value(" << static_cast<int>(today) << ") the same as poet's day("
    << static_cast<int>(poets_day)
    << ")" << static_cast<char>(ch) << std::endl;
    
}
