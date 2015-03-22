//
//  main.cpp
//  Temperature_convertor
//
//  Created by hambarkh on 22/03/15.
//  Copyright (c) 2015 Akola. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";

    // Ask for Lower limit, higher limit, step size
    float lower,higher,step;
    while (1) {
        cout << "Enter lower limit, limit >= -20 :" ;
        cin >> lower ;
        if (lower < -20) {
            cout << "Incorrect lower value!" << endl;
        }
        else{
            break;
        }
    }
    while (1) {
        cout << "Enter higher limit, limit <= 100 :" ;
        cin >> higher ;
        if (higher > 100 || higher < lower) {
            cout << "Incorrect higher value!" << endl;
        }
        else{
            break;
        }
    }
    
    while (1) {
        cout << "Enter step size, step > 0 and step <= 5 :" ;
        cin >> step ;
        if (step < 0 || step > 5) {
            cout << "Incorrect step size!" << endl;
        }
        else{
            break;
        }
    }
    cout << "Lower Temp = " << lower << " Higher Temp = " << higher << " Step Size = "  << step << endl;
    //print table
    //int i;
    cout << setw(10) << "Celcius" << setw(10) << "Farheniet" << endl;
    float i,farheniet;
    for (i = lower; i< higher; i=i+step) {
        farheniet = (i*9)/5 + 32;
        cout << setw(10) << i << setw(10) << farheniet << endl;
    }
    
    return 0;
}
