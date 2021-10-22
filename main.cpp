#include <iostream>

using namespace std;

int main()
{
    /*Number ofDegree is 360, convert 1 minute to 60 seconds then Divide both numbers 360/60=6 degPerSec*/
    int rpm=3000,sum;
    int degPerSec=6;

    //Multiply degPerSec and rpm//
    sum=rpm*degPerSec;
    cout <<rpm<< " * "<<degPerSec<< " = " <<sum<<" degrees it rotates in one second"<< endl;
    return 0;
}

/*Link
https://grizly.com/question/an-electric-motor-makes-3000-revolutions-per-minute-how-many-degrees-
does-it-rotate-in-one-second#:~:text=Answer%2018%2C000%20degrees,then%20divide%20by%2060%20seconds.*/
