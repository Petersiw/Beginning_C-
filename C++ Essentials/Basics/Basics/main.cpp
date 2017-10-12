//
//  main.cpp
//  Basics
//
//  Created by Peter Siw on 09/10/2017.
//  Copyright © 2017 Peter Siw. All rights reserved.
//


/*Pseudo code: general logic
 
 { #1 display the sequence
 while the guess is not correct and
 the user wants to guess again
    { #2
        read guess
        increment the number-of-tries count
        if the guess is correct
        { #3
            increment correct-guess count
            set got_it to true
        } else {
            express regret that the user has guessed wrong
            generate a different response based on the current number of guesses by the user
            // #4 
                ask the user if she wants to guess again
                read response
                if user says no #5
                set go_for_it to false
            }
    }
}
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    const int seq_size (18);
    int elem_vals[ seq_size] = {
        1, 2, 3, //Fibonacci
        3, 4, 7, //Lucas
        2, 5, 12, //Pell
        3, 6, 10, //Triangular
        4, 9, 16, //Square
        5, 12, 22 //Pentagonal
    };
    //initialise elem_seq with values of elem_vals
    vector<int> elem_seq(elem_vals, elem_vals+seq_size);
    const int max_seq (6);
    string seq_names[max_seq] = {
        "Fibonacci", "Lucas", "Pell", "Triangular", "Square", "Pentagonal"
    };
    bool go_for_it (true), next_seq (true);
    int user_guess (0), num_right (0), tries_count (0), cur_tuple (0);
    
    //Display part of a series
    while (next_seq == true && cur_tuple < seq_size && go_for_it == true)
    {
        cout << "The first two elements of the sequence are : "
        << elem_seq[ cur_tuple] << ", "
        << elem_seq[ cur_tuple + 1]
        << "\nWhat is the next element? ";
        cin >> user_guess;
        
        if (user_guess == elem_seq[cur_tuple+2])
            //correct
        {
            ++num_right;
            cout << "Very good. Yes, "
            << elem_seq[cur_tuple+2]
            << " is the next element in the "
            << seq_names[cur_tuple/3] << " sequence.\n";
            cur_tuple += 3;
        }
        else
        {
            ++tries_count;
            switch (tries_count) {
                case 1:
                    cout << "Oops! Nice guess but not quite it.\n";
                    break;
                
                case 2:
                    cout << "Hmm. Sorry. Wrong again.\n";
                    break;
                
                case 3:
                    cout << "Ah, this is harder than it looks, isn't it?\n";
                    break;
                
                default:
                    cout << "It must be getting pretty frustrating by now!\n";
                    break;
            }
        
            cout << "Want to try again? (Y/N) ";
            char usr_rsp;
            cin >> usr_rsp;
            
            if (usr_rsp == 'Y' || usr_rsp == 'y')
                go_for_it = true;
            else
                go_for_it = false;
        }
    }
    cout << "Well done!!! You took " << tries_count << " times to get them all right.\n";
    return 0;
}


















