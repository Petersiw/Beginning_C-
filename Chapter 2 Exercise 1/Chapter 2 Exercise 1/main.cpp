//
//  main.cpp
//  Chapter 2 Exercise 1
//
//  Created by Peter Siw on 07/09/2017.
//  Copyright © 2017 Peter Siw. All rights reserved.
//

#include <iostream>
#include <iomanip> //for setprecision
#include <cmath>  //for tangent

using std::cout;
using std::cin;


int main ()
{
    
    //Computing area of a circle
    
    const float pi {3.14159f};
    
    float radius {}, area_of_circle {}, accuracy {};
    
    cout << "To calculate the area of a circle, please enter the desired radius: ";
    cin >> radius;
    
    cout << "Please indicate to how accurate you want this area to be (in number of digits): ";
    cin >> accuracy;
    
    area_of_circle = pi * radius * radius;
    
    cout << "The area of the cicle is " << std::setprecision(accuracy)
    << area_of_circle << " square units.\n";
    
    //Convert inches to feet-and-inches
    
    const unsigned int inches_per_feet {12};
    
    unsigned int inches {}, feet {};
    
    cout << "Please insert a length in inches that you want to convert to feet-and-inches: ";
    cin >> inches;
    
    feet = inches % inches_per_feet;
    
    inches /= inches_per_feet;
    
    cout << "The corresponding value in feet and inches are " << feet << " feet and " << inches << " inches.\n";
    
    //Calculate height of tree
    
    float distance_from_tree {}, height_of_eye {}, height_of_tree {};
    double angle {};
    
    cout << "To calculate the height of the tree, please indicate the following information: \n";
    cout << "\t(1) Your distance from the tree: ";
    cin >> distance_from_tree;
    cout << "\t(2) The height of your eye from the ground: ";
    cin >> height_of_eye;
    cout << "\t(3) The angle between your eye and the top of the \t\ttree (in degrees): ";
    cin >> angle;
    
    angle /= (180 * pi);
    height_of_tree = height_of_eye + distance_from_tree * std::tan(angle);
    
    cout << "The height of the tree is " << std::setprecision(3) << height_of_tree << " unit(s).\n";
    
    //Which is the bigger integer
    
    long a {}, b {};
    
    cout << "Please express two different positive integers, separated by a space in between: ";
    cin >> a;
    cout << " ";
    cin >> b;
    cout << "\n";
    
    long larger {(a * (a / b) + b * (b / a) / (a / b + b / a))};
    long smaller {(b * (a / b) + a * (b / a) / (a / b + b / a))};
    
    cout << "The larger integer is " << larger << ".\n";
    cout << "The smaller integer is " << smaller << ".\n";
    
    
    //BMI calculator
    
    float weight {}, height_feet {}, height_inches {}, BMI {}, height {};
    
    const float pound_per_kilogram {2.2f}, metre_per_foot {0.3048f};
 
    cout << "Please insert your weight in pounds: ";
    cin >> weight; cout << "\n";
    cout << "Please insert your height in feet and inches separated by a space: ";
    cin >> height_feet; cout << " "; cin >> height_inches; cout << "\n";
    
    //Convert weight
    weight /= pound_per_kilogram;
    
    //Convert height
    height = height_feet * metre_per_foot + height_inches / 12 * metre_per_foot;
    
    BMI = weight/(height * height);
    
    cout << "Your BMI is " << std::fixed << std::setprecision(1) << BMI << ".\n";
}
