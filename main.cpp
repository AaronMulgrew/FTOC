//
//  main.cpp
//  SimpleFahrenheitConverter
//
//  Created by Aaron Mulgrew on 03/07/2016.
//  Copyright © 2016 Aaron Mulgrew. All rights reserved.
//

#include <iostream>
using namespace std;

//declare vars
float fhToC( float degreesF = 32.0);

int main()
{
    float fahrenheit, centigrade;
    string ans;
    
    //Ask for input
    cout << "Enter a Fahrenheit temperature:\t";
    cin >> fahrenheit;
    
    centigrade = fhToC(fahrenheit);
    
    cout << fahrenheit << "F is " << centigrade << "C";
    cout << endl << "Freezing point: " << fhToC() << "C" << endl;
    
    //ask if want to exit
    cout << "Do you want to exit? (Y or N)\t";
    cin >> ans;
    if (ans == "N")
    {
        main();
    }
    
    return 0;
}

float fhToC( float degreesF)
{
    float degreesC = (( 5.0 / 9.0 ) * (degreesF - 32.0));
    return degreesC;
}