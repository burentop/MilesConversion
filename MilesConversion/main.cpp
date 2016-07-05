//
//  main.cpp
//  MilesConversion
//
//  Created by Brent Perry on 7/5/16.
//  Copyright © 2016 Brent Perry. All rights reserved.
//

#include "../../../std_lib_facilities.h"

int main()
{
#define CONVERSION 1.609;
    double miles;
    double kilometers;
    
    cout << "Please enter the number of miles you drive to work: ";
    cin >> miles;
    
    kilometers = miles * CONVERSION;
    
    cout << "You drive " << kilometers << " km to work.\n";
}
